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

// Function: entry_001b0538
// Address: 0x1b0538 - 0x1b0588
void entry_001b0538_0x1b0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0538_0x1b0538");
#endif

    switch (ctx->pc) {
        case 0x1b0570u: goto label_1b0570;
        default: break;
    }

    ctx->pc = 0x1b0538u;

label_1b0538:
    // 0x1b0538: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b0538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b053c: 0x0  nop
    ctx->pc = 0x1b053cu;
    // NOP
    // 0x1b0540: 0x0  nop
    ctx->pc = 0x1b0540u;
    // NOP
    // 0x1b0544: 0x0  nop
    ctx->pc = 0x1b0544u;
    // NOP
    // 0x1b0548: 0x0  nop
    ctx->pc = 0x1b0548u;
    // NOP
    // 0x1b054c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B054Cu;
    {
        const bool branch_taken_0x1b054c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b054c) {
            ctx->pc = 0x1B0538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0538;
        }
    }
    ctx->pc = 0x1B0554u;
    // 0x1b0554: 0x26657ed0  addiu       $a1, $s3, 0x7ED0
    ctx->pc = 0x1b0554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32464));
    // 0x1b0558: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1b0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b055c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b0560: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1b0560u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0564: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1b0564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b0568: 0xc06c072  jal         func_1B01C8
    ctx->pc = 0x1B0568u;
    SET_GPR_U32(ctx, 31, 0x1B0570u);
    ctx->pc = 0x1B056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0568u;
    // 0x1b056c: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B01C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B01C8u, 0x1B0568u, 0x1B0570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0570u;
label_1b0570:
    // 0x1b0570: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1b0570u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0574: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b0574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b0578: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0578u;
    {
        const bool branch_taken_0x1b0578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0578u;
        // 0x1b057c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0578) {
            ctx->pc = 0x1B0588u;
            return;
        }
    }
    ctx->pc = 0x1B0580u;
    // 0x1b0580: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0580u;
    {
        const bool branch_taken_0x1b0580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0580u;
        // 0x1b0584: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0580) {
            ctx->pc = 0x1B0590u;
            return;
        }
    }
    ctx->pc = 0x1B0588u;
}
