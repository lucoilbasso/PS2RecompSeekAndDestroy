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

// Function: setTEXFLUSH
// Address: 0x174490 - 0x1744ac
void setTEXFLUSH_0x174490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setTEXFLUSH_0x174490");
#endif

    ctx->pc = 0x174490u;

    // 0x174490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174494: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x174494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x174498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17449c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17449cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1744a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1744a4: 0x805d118  j           func_174460
    ctx->pc = 0x1744A4u;
    ctx->pc = 0x1744A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744A4u;
    // 0x1744a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x1744ACu;
}
