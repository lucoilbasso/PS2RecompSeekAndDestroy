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

// Function: entry_0016211c
// Address: 0x16211c - 0x162160
void entry_0016211c_0x16211c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016211c_0x16211c");
#endif

    switch (ctx->pc) {
        case 0x16212cu: goto label_16212c;
        case 0x162134u: goto label_162134;
        default: break;
    }

    ctx->pc = 0x16211cu;

    // 0x16211c: 0x8e9119c0  lw          $s1, 0x19C0($s4)
    ctx->pc = 0x16211cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6592)));
    // 0x162120: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x162120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x162124: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x162124u;
    SET_GPR_U32(ctx, 31, 0x16212Cu);
    ctx->pc = 0x162128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162124u;
    // 0x162128: 0x118980  sll         $s1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x162124u, 0x16212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16212Cu;
label_16212c:
    // 0x16212c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16212Cu;
    SET_GPR_U32(ctx, 31, 0x162134u);
    ctx->pc = 0x162130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16212Cu;
    // 0x162130: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16212Cu, 0x162134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162134u;
label_162134:
    // 0x162134: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x162134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x162138: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x162138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x16213c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16213cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162140: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x162144: 0x8e8c19d0  lw          $t4, 0x19D0($s4)
    ctx->pc = 0x162144u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6608)));
    // 0x162148: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x162148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16214c: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x16214cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x162150: 0x8e8819c4  lw          $t0, 0x19C4($s4)
    ctx->pc = 0x162150u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6596)));
    // 0x162154: 0x8c6b0020  lw          $t3, 0x20($v1)
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x162158: 0x8c6a0028  lw          $t2, 0x28($v1)
    ctx->pc = 0x162158u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x16215c: 0x0  nop
    ctx->pc = 0x16215cu;
    // NOP
    ctx->pc = 0x162160u;
}
