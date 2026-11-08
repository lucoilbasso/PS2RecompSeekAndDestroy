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

// Function: entry_0011edcc
// Address: 0x11edcc - 0x11ede8
void entry_0011edcc_0x11edcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011edcc_0x11edcc");
#endif

    ctx->pc = 0x11edccu;

    // 0x11edcc: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x11edccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x11edd0: 0xdce30078  ld          $v1, 0x78($a3)
    ctx->pc = 0x11edd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x11edd4: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x11edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x11edd8: 0xdce20080  ld          $v0, 0x80($a3)
    ctx->pc = 0x11edd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x11eddc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x11eddcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x11ede0: 0xdce30088  ld          $v1, 0x88($a3)
    ctx->pc = 0x11ede0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x11ede4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x11ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    ctx->pc = 0x11ede8u;
}
