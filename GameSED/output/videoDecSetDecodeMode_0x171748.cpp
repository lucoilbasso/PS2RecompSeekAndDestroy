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

// Function: videoDecSetDecodeMode
// Address: 0x171748 - 0x17175c
void videoDecSetDecodeMode_0x171748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecSetDecodeMode_0x171748");
#endif

    ctx->pc = 0x171748u;

    // 0x171748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17174c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171754: 0x806f63a  j           func_1BD8E8
    ctx->pc = 0x171754u;
    ctx->pc = 0x171758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171754u;
    // 0x171758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD8E8u;
    sceMpegSetDecodeMode_0x1bd8e8(rdram, ctx, runtime); return;
    ctx->pc = 0x17175Cu;
}
