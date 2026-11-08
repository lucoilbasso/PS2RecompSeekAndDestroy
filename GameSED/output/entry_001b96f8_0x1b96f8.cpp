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

// Function: entry_001b96f8
// Address: 0x1b96f8 - 0x1b9754
void entry_001b96f8_0x1b96f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b96f8_0x1b96f8");
#endif

    switch (ctx->pc) {
        case 0x1b9744u: goto label_1b9744;
        default: break;
    }

    ctx->pc = 0x1b96f8u;

label_1b96f8:
    // 0x1b96f8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1b96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b96fc: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1b96fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1b9700: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b9700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9704: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b9704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b9708: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1b9708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b970c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b970cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9710: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B9710u;
    {
        const bool branch_taken_0x1b9710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9710) {
            ctx->pc = 0x1B96F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b96f8;
        }
    }
    ctx->pc = 0x1B9718u;
    // 0x1b9718: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b9718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b971c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b971cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b9720: 0x2484d3c0  addiu       $a0, $a0, -0x2C40
    ctx->pc = 0x1b9720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955968));
    // 0x1b9724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b9724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b972c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b972cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9730: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1b9730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9734: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b9734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9738: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b9738u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b973c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B973Cu;
    SET_GPR_U32(ctx, 31, 0x1B9744u);
    ctx->pc = 0x1B9740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B973Cu;
    // 0x1b9740: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B973Cu, 0x1B9744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9744u;
label_1b9744:
    // 0x1b9744: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9744u;
    {
        const bool branch_taken_0x1b9744 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b9744) {
            ctx->pc = 0x1B9748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9744u;
            // 0x1b9748: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9754u;
            return;
        }
    }
    ctx->pc = 0x1B974Cu;
    // 0x1b974c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B974Cu;
    {
        const bool branch_taken_0x1b974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B974Cu;
        // 0x1b9750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b974c) {
            ctx->pc = 0x1B9778u;
            return;
        }
    }
    ctx->pc = 0x1B9754u;
}
