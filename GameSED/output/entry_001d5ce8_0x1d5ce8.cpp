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

// Function: entry_001d5ce8
// Address: 0x1d5ce8 - 0x1d5d28
void entry_001d5ce8_0x1d5ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5ce8_0x1d5ce8");
#endif

    switch (ctx->pc) {
        case 0x1d5cf4u: goto label_1d5cf4;
        default: break;
    }

    ctx->pc = 0x1d5ce8u;

    // 0x1d5ce8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1d5ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d5cec: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5CECu;
    SET_GPR_U32(ctx, 31, 0x1D5CF4u);
    ctx->pc = 0x1D5CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CECu;
    // 0x1d5cf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5CECu, 0x1D5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CF4u;
label_1d5cf4:
    // 0x1d5cf4: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1d5cf8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1d5cf8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cfc: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x1d5cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1d5d00: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x1d5d00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x1d5d04: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x1d5d08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5d08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d0c: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d5d10: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d5d14: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x1d5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1d5d18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5d1c: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x1d5d1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d5d20: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1d5d24: 0x0  nop
    ctx->pc = 0x1d5d24u;
    // NOP
    ctx->pc = 0x1d5d28u;
}
