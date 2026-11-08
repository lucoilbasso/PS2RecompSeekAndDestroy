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

// Function: entry_001cc9e8
// Address: 0x1cc9e8 - 0x1cca28
void entry_001cc9e8_0x1cc9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc9e8_0x1cc9e8");
#endif

    switch (ctx->pc) {
        case 0x1cca14u: goto label_1cca14;
        default: break;
    }

    ctx->pc = 0x1cc9e8u;

label_1cc9e8:
    // 0x1cc9e8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1cc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1cc9ec:
    // 0x1cc9ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cc9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9f0:
    // 0x1cc9f0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1cc9f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cc9f4:
    // 0x1cc9f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cc9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9f8:
    // 0x1cc9f8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1cc9f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cc9fc:
    // 0x1cc9fc: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1cc9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1cca00:
    // 0x1cca00: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1cca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1cca04:
    // 0x1cca04: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1cca04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cca08:
    // 0x1cca08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1cca0c:
    // 0x1cca0c: 0x40f809  jalr        $v0
label_1cca10:
    if (ctx->pc == 0x1CCA10u) {
        ctx->pc = 0x1CCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA0Cu;
        // 0x1cca10: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA14u;
        goto label_1cca14;
    }
    ctx->pc = 0x1CCA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCA14u);
        ctx->pc = 0x1CCA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA0Cu;
        // 0x1cca10: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA0Cu, 0x1CCA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCA14u;
label_1cca14:
    // 0x1cca14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cca14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cca18:
    // 0x1cca18: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1cca18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cca1c:
    // 0x1cca1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cca20:
    // 0x1cca20: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
label_1cca24:
    if (ctx->pc == 0x1CCA24u) {
        ctx->pc = 0x1CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA20u;
        // 0x1cca24: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCA28u;
        goto label_fallthrough_0x1cca20;
    }
    ctx->pc = 0x1CCA20u;
    {
        const bool branch_taken_0x1cca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cca20) {
            ctx->pc = 0x1CCA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCA20u;
            // 0x1cca24: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC960u;
            return;
        }
    }
label_fallthrough_0x1cca20:
    ctx->pc = 0x1CCA28u;
}
