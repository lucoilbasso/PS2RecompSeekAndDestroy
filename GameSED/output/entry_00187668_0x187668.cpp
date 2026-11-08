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

// Function: entry_00187668
// Address: 0x187668 - 0x1876b4
void entry_00187668_0x187668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187668_0x187668");
#endif

    switch (ctx->pc) {
        case 0x18767cu: goto label_18767c;
        case 0x1876b0u: goto label_1876b0;
        default: break;
    }

    ctx->pc = 0x187668u;

label_187668:
    // 0x187668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18766c:
    // 0x18766c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18766cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187670:
    // 0x187670: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x187670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_187674:
    // 0x187674: 0xc062204  jal         func_188810
label_187678:
    if (ctx->pc == 0x187678u) {
        ctx->pc = 0x187678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187674u;
        // 0x187678: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18767Cu;
        goto label_18767c;
    }
    ctx->pc = 0x187674u;
    SET_GPR_U32(ctx, 31, 0x18767Cu);
    ctx->pc = 0x187678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187674u;
    // 0x187678: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188810u, 0x187674u, 0x18767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18767Cu;
label_18767c:
    // 0x18767c: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x18767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_187680:
    // 0x187680: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x187680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_187684:
    // 0x187684: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x187684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_187688:
    // 0x187688: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_18768c:
    if (ctx->pc == 0x18768Cu) {
        ctx->pc = 0x18768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187688u;
        // 0x18768c: 0x8e420150  lw          $v0, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187690u;
        goto label_187690;
    }
    ctx->pc = 0x187688u;
    {
        const bool branch_taken_0x187688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187688) {
            ctx->pc = 0x18768Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187688u;
            // 0x18768c: 0x8e420150  lw          $v0, 0x150($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1876B4u;
            return;
        }
    }
    ctx->pc = 0x187690u;
label_187690:
    // 0x187690: 0x8e460164  lw          $a2, 0x164($s2)
    ctx->pc = 0x187690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_187694:
    // 0x187694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187698:
    // 0x187698: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x187698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_18769c:
    // 0x18769c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1876a0:
    // 0x1876a0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1876a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1876a4:
    // 0x1876a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1876a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1876a8:
    // 0x1876a8: 0x60f809  jalr        $v1
label_1876ac:
    if (ctx->pc == 0x1876ACu) {
        ctx->pc = 0x1876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876A8u;
        // 0x1876ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876B0u;
        goto label_1876b0;
    }
    ctx->pc = 0x1876A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1876B0u);
        ctx->pc = 0x1876ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876A8u;
        // 0x1876ac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1876A8u, 0x1876B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1876B0u;
label_1876b0:
    // 0x1876b0: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x1876b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    ctx->pc = 0x1876b4u;
}
