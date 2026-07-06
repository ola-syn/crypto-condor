/**
 * X25519 wrapper template for crypto-condor.
 *
 * Compile as a shared library:
 *     gcc -shared -fPIC -o x25519_wrapper.so x25519_wrapper.c -lcrypto
 *
 * Test with:
 *     crypto-condor-cli test harness x25519_wrapper.so
 *
 * TODO: Add your headers and implement the function below.
 */

#include <stdint.h>
#include <string.h>

/**
 * @brief Performs an X25519 key exchange.
 *
 * @param[out] shared_secret Buffer to store the shared secret (32 bytes).
 * @param[out] shared_secret_size Set to the size of the shared secret.
 * @param[in] secret_key The secret key (32 bytes).
 * @param[in] secret_key_size The size of the secret key.
 * @param[in] peer_key The peer's public key (32 bytes).
 * @param[in] peer_key_size The size of the peer's public key.
 *
 * @return 1 on success, 0 on failure.
 */
int CC_x25519_exchange(uint8_t *shared_secret, size_t *shared_secret_size,
                       const uint8_t *secret_key, size_t secret_key_size,
                       const uint8_t *peer_key, size_t peer_key_size) {
  /* TODO: Implement the X25519 key exchange here. */
  return 0;
}
