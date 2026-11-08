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

// Function: ApEventMapWriteBit__FP9IVector32T0i
// Address: 0x14a240 - 0x14a2d8
void ApEventMapWriteBit__FP9IVector32T0i_0x14a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApEventMapWriteBit__FP9IVector32T0i_0x14a240");
#endif

    switch (ctx->pc) {
        case 0x14a260u: goto label_14a260;
        case 0x14a280u: goto label_14a280;
        default: break;
    }

    ctx->pc = 0x14a240u;

    // 0x14a240: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x14a240u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14a244: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x14a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14a248: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x14a248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14a24c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14A24Cu;
    {
        const bool branch_taken_0x14a24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A24Cu;
        // 0x14a250: 0x811c0  sll         $v0, $t0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a24c) {
            ctx->pc = 0x14A2D0u;
            goto label_14a2d0;
        }
    }
    ctx->pc = 0x14A254u;
    // 0x14a254: 0x3c0a0020  lui         $t2, 0x20
    ctx->pc = 0x14a254u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32 << 16));
    // 0x14a258: 0x254a7820  addiu       $t2, $t2, 0x7820
    ctx->pc = 0x14a258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30752));
    // 0x14a25c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x14a25cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_14a260:
    // 0x14a260: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14a260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a264: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14a268: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a26c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A26Cu;
    {
        const bool branch_taken_0x14a26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a26c) {
            ctx->pc = 0x14A270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A26Cu;
            // 0x14a270: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A2C0u;
            goto label_14a2c0;
        }
    }
    ctx->pc = 0x14A274u;
    // 0x14a274: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x14a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x14a278: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x14a278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x14a27c: 0x2c490080  sltiu       $t1, $v0, 0x80
    ctx->pc = 0x14a27cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_14a280:
    // 0x14a280: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A280u;
    {
        const bool branch_taken_0x14a280 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A280u;
        // 0x14a284: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a280) {
            ctx->pc = 0x14A2A8u;
            goto label_14a2a8;
        }
    }
    ctx->pc = 0x14A288u;
    // 0x14a288: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A288u;
    {
        const bool branch_taken_0x14a288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a288) {
            ctx->pc = 0x14A28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A288u;
            // 0x14a28c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A2ACu;
            goto label_14a2ac;
        }
    }
    ctx->pc = 0x14A290u;
    // 0x14a290: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x14a290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14a294: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A294u;
    {
        const bool branch_taken_0x14a294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a294) {
            ctx->pc = 0x14A298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A294u;
            // 0x14a298: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A2ACu;
            goto label_14a2ac;
        }
    }
    ctx->pc = 0x14A29Cu;
    // 0x14a29c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x14a29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a2a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14a2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14a2a4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x14a2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_14a2a8:
    // 0x14a2a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14a2ac:
    // 0x14a2ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a2b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14a2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a2b4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14A2B4u;
    {
        const bool branch_taken_0x14a2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2B4u;
        // 0x14a2b8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2b4) {
            ctx->pc = 0x14A280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a280;
        }
    }
    ctx->pc = 0x14A2BCu;
    // 0x14a2bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x14a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_14a2c0:
    // 0x14a2c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14a2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14a2c4: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x14a2c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14a2c8: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14A2C8u;
    {
        const bool branch_taken_0x14a2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2C8u;
        // 0x14a2cc: 0x254a0080  addiu       $t2, $t2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a2c8) {
            ctx->pc = 0x14A260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a260;
        }
    }
    ctx->pc = 0x14A2D0u;
label_14a2d0:
    // 0x14a2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14A2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A2D8u;
}
