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

// Function: entry_00131264
// Address: 0x131264 - 0x131274
void entry_00131264_0x131264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131264_0x131264");
#endif

    ctx->pc = 0x131264u;

    // 0x131264: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x131264u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x131268: 0xfe230170  sd          $v1, 0x170($s1)
    ctx->pc = 0x131268u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 368), GPR_U64(ctx, 3));
    // 0x13126c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x13126cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131270: 0xfe220178  sd          $v0, 0x178($s1)
    ctx->pc = 0x131270u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 376), GPR_U64(ctx, 2));
    ctx->pc = 0x131274u;
}
