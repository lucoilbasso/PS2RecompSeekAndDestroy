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

// Function: sceDevConsPiece
// Address: 0x1ae480 - 0x1ae4e8
void sceDevConsPiece_0x1ae480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsPiece_0x1ae480");
#endif

    ctx->pc = 0x1ae480u;

    // 0x1ae480: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1ae480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1ae484: 0x4a00016  bltz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AE484u;
    {
        const bool branch_taken_0x1ae484 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1AE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE484u;
        // 0x1ae488: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae484) {
            ctx->pc = 0x1AE4E0u;
            goto label_1ae4e0;
        }
    }
    ctx->pc = 0x1AE48Cu;
    // 0x1ae48c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ae48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae490: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1ae490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ae494: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE494u;
    {
        const bool branch_taken_0x1ae494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae494) {
            ctx->pc = 0x1AE4E0u;
            goto label_1ae4e0;
        }
    }
    ctx->pc = 0x1AE49Cu;
    // 0x1ae49c: 0x4c00010  bltz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AE49Cu;
    {
        const bool branch_taken_0x1ae49c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1ae49c) {
            ctx->pc = 0x1AE4E0u;
            goto label_1ae4e0;
        }
    }
    ctx->pc = 0x1AE4A4u;
    // 0x1ae4a4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ae4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ae4a8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1ae4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae4ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AE4ACu;
    {
        const bool branch_taken_0x1ae4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4ACu;
        // 0x1ae4b0: 0xc34818  mult        $t1, $a2, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4ac) {
            ctx->pc = 0x1AE4E0u;
            goto label_1ae4e0;
        }
    }
    ctx->pc = 0x1AE4B4u;
    // 0x1ae4b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ae4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ae4b8: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x1ae4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1ae4bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ae4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ae4c0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ae4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae4c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1ae4c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae4c8: 0x2c6200f1  sltiu       $v0, $v1, 0xF1
    ctx->pc = 0x1ae4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)241) ? 1 : 0);
    // 0x1ae4cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AE4CCu;
    {
        const bool branch_taken_0x1ae4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae4cc) {
            ctx->pc = 0x1AE4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE4CCu;
            // 0x1ae4d0: 0x673825  or          $a3, $v1, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE4D4u;
            goto label_1ae4d4;
        }
    }
    ctx->pc = 0x1AE4D4u;
label_1ae4d4:
    // 0x1ae4d4: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x1ae4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1ae4d8: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1ae4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1ae4dc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1ae4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ae4e0:
    // 0x1ae4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE4E8u;
}
