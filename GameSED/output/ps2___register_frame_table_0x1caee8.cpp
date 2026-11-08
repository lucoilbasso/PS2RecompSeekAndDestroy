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

// Function: __register_frame_table
// Address: 0x1caee8 - 0x1caf18
void ps2___register_frame_table_0x1caee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___register_frame_table_0x1caee8");
#endif

    switch (ctx->pc) {
        case 0x1caf00u: goto label_1caf00;
        default: break;
    }

    ctx->pc = 0x1caee8u;

    // 0x1caee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1caee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1caeec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1caef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caef4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1caef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1caef8: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CAEF8u;
    SET_GPR_U32(ctx, 31, 0x1CAF00u);
    ctx->pc = 0x1CAEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEF8u;
    // 0x1caefc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CAEF8u, 0x1CAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF00u;
label_1caf00:
    // 0x1caf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1caf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caf08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1caf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caf0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caf0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caf10: 0x8072ba0  j           func_1CAE80
    ctx->pc = 0x1CAF10u;
    ctx->pc = 0x1CAF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF10u;
    // 0x1caf14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAE80u;
    ps2___register_frame_info_table_0x1cae80(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAF18u;
}
