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

// Function: entry_001885f0
// Address: 0x1885f0 - 0x188640
void entry_001885f0_0x1885f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001885f0_0x1885f0");
#endif

    switch (ctx->pc) {
        case 0x188604u: goto label_188604;
        case 0x18860cu: goto label_18860c;
        case 0x188620u: goto label_188620;
        case 0x18862cu: goto label_18862c;
        default: break;
    }

    ctx->pc = 0x1885f0u;

label_1885f0:
    // 0x1885f0: 0x138880  sll         $s1, $s3, 2
    ctx->pc = 0x1885f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1885f4: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1885f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1885f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1885f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1885fc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1885FCu;
    SET_GPR_U32(ctx, 31, 0x188604u);
    ctx->pc = 0x188600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885FCu;
    // 0x188600: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1885FCu, 0x188604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188604u;
label_188604:
    // 0x188604: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x188604u;
    SET_GPR_U32(ctx, 31, 0x18860Cu);
    ctx->pc = 0x188608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188604u;
    // 0x188608: 0x24040250  addiu       $a0, $zero, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x188604u, 0x18860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18860Cu;
label_18860c:
    // 0x18860c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18860cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188614: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x188614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x188618: 0xc0624a8  jal         func_1892A0
    ctx->pc = 0x188618u;
    SET_GPR_U32(ctx, 31, 0x188620u);
    ctx->pc = 0x18861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188618u;
    // 0x18861c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1892A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892A0u, 0x188618u, 0x188620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188620u;
label_188620:
    // 0x188620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188624: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x188624u;
    SET_GPR_U32(ctx, 31, 0x18862Cu);
    ctx->pc = 0x188628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188624u;
    // 0x188628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x188624u, 0x18862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18862Cu;
label_18862c:
    // 0x18862c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x18862cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x188630: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x188630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x188634: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x188634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x188638: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x188638u;
    {
        const bool branch_taken_0x188638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188638) {
            ctx->pc = 0x18863Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188638u;
            // 0x18863c: 0x8e4201bc  lw          $v0, 0x1BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1885F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1885f0;
        }
    }
    ctx->pc = 0x188640u;
}
