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

// Function: entry_0017bdb0
// Address: 0x17bdb0 - 0x17be00
void entry_0017bdb0_0x17bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bdb0_0x17bdb0");
#endif

    switch (ctx->pc) {
        case 0x17bde8u: goto label_17bde8;
        default: break;
    }

    ctx->pc = 0x17bdb0u;

    // 0x17bdb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bdb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bdb8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17bdb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bdc0: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x17bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x17bdc4: 0x3401c034  ori         $at, $zero, 0xC034
    ctx->pc = 0x17bdc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17bdc8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x17bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x17bdcc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x17bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17bdd0: 0x1066001f  beq         $v1, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x17BDD0u;
    {
        const bool branch_taken_0x17bdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x17BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDD0u;
        // 0x17bdd4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bdd0) {
            ctx->pc = 0x17BE50u;
            return;
        }
    }
    ctx->pc = 0x17BDD8u;
    // 0x17bdd8: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x17bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
    // 0x17bddc: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x17bddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x17bde0: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x17BDE0u;
    SET_GPR_U32(ctx, 31, 0x17BDE8u);
    ctx->pc = 0x17BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDE0u;
    // 0x17bde4: 0x8ce40030  lw          $a0, 0x30($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x17BDE0u, 0x17BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDE8u;
label_17bde8:
    // 0x17bde8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17bde8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17bdecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17bdf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdf4: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17bdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17bdf8: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x17bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x17bdfc: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x17bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x17be00u;
}
