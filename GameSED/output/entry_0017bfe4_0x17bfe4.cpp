#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0017bfe4
// Address: 0x17bfe4 - 0x17bfec
void entry_0017bfe4_0x17bfe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bfe4_0x17bfe4");
#endif

    ctx->pc = 0x17bfe4u;

    // 0x17bfe4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bfe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bfe8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17bfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x17bfecu;
}
