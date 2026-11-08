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

// Function: entry_001bfd94
// Address: 0x1bfd94 - 0x1bfddc
void entry_001bfd94_0x1bfd94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfd94_0x1bfd94");
#endif

    ctx->pc = 0x1bfd94u;

    // 0x1bfd94: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1bfd94u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1bfd98: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1bfd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1bfd9c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1bfd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bfda0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1bfda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1bfda4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1bfda4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1bfda8: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1BFDA8u;
    {
        const bool branch_taken_0x1bfda8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDA8u;
        // 0x1bfdac: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfda8) {
            ctx->pc = 0x1BFD58u;
            return;
        }
    }
    ctx->pc = 0x1BFDB0u;
    // 0x1bfdb0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1bfdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bfdb4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1bfdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bfdb8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1bfdb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfdbc: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1bfdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1bfdc0: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1bfdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1bfdc4: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1bfdc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1bfdc8: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1bfdc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1bfdcc: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1BFDCCu;
    {
        const bool branch_taken_0x1bfdcc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDCCu;
        // 0x1bfdd0: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdcc) {
            ctx->pc = 0x1BFD38u;
            return;
        }
    }
    ctx->pc = 0x1BFDD4u;
    // 0x1bfdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFDDCu;
}
