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

// Function: entry_001c07ec
// Address: 0x1c07ec - 0x1c0834
void entry_001c07ec_0x1c07ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c07ec_0x1c07ec");
#endif

    ctx->pc = 0x1c07ecu;

    // 0x1c07ec: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1c07ecu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1c07f0: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1c07f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1c07f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1c07f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c07f8: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1c07fc: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1c07fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1c0800: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C0800u;
    {
        const bool branch_taken_0x1c0800 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0800u;
        // 0x1c0804: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0800) {
            ctx->pc = 0x1C0780u;
            return;
        }
    }
    ctx->pc = 0x1C0808u;
    // 0x1c0808: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1c0808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c080c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1c080cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c0810: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1c0810u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c0814: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1c0814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1c0818: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1c0818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1c081c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1c081cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1c0820: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x1c0820u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1c0824: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1C0824u;
    {
        const bool branch_taken_0x1c0824 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0824u;
        // 0x1c0828: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0824) {
            ctx->pc = 0x1C0748u;
            return;
        }
    }
    ctx->pc = 0x1C082Cu;
    // 0x1c082c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C082Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C082Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0834u;
}
