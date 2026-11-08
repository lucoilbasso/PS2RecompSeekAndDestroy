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

// Function: B_Bsearch_Uint16__FUsPUsi
// Address: 0x19d198 - 0x19d218
void B_Bsearch_Uint16__FUsPUsi_0x19d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_Bsearch_Uint16__FUsPUsi_0x19d198");
#endif

    switch (ctx->pc) {
        case 0x19d1b8u: goto label_19d1b8;
        default: break;
    }

    ctx->pc = 0x19d198u;

    // 0x19d198: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19d198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19d19c: 0x3089ffff  andi        $t1, $a0, 0xFFFF
    ctx->pc = 0x19d19cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x19d1a0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x19d1a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x19d1a4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x19D1A4u;
    {
        const bool branch_taken_0x19d1a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1A4u;
        // 0x19d1a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1a4) {
            ctx->pc = 0x19D200u;
            goto label_19d200;
        }
    }
    ctx->pc = 0x19D1ACu;
    // 0x19d1ac: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x19d1acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19d1b0: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x19d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x19d1b4: 0x0  nop
    ctx->pc = 0x19d1b4u;
    // NOP
label_19d1b8:
    // 0x19d1b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d1bc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x19d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x19d1c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d1c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19d1c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x19d1c8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x19d1c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d1cc: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x19d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x19d1d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x19d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d1d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19d1d8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x19d1d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d1dc: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x19d1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19d1e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D1E0u;
    {
        const bool branch_taken_0x19d1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1E0u;
        // 0x19d1e4: 0x8a2021  addu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1e0) {
            ctx->pc = 0x19D1F0u;
            goto label_19d1f0;
        }
    }
    ctx->pc = 0x19D1E8u;
    // 0x19d1e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19D1E8u;
    {
        const bool branch_taken_0x19d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1E8u;
        // 0x19d1ec: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1e8) {
            ctx->pc = 0x19D1F4u;
            goto label_19d1f4;
        }
    }
    ctx->pc = 0x19D1F0u;
label_19d1f0:
    // 0x19d1f0: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x19d1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_19d1f4:
    // 0x19d1f4: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x19d1f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x19d1f8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19D1F8u;
    {
        const bool branch_taken_0x19d1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d1f8) {
            ctx->pc = 0x19D1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D1F8u;
            // 0x19d1fc: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d1b8;
        }
    }
    ctx->pc = 0x19D200u;
label_19d200:
    // 0x19d200: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x19d200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x19d204: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19d208: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19d208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d20c: 0x691826  xor         $v1, $v1, $t1
    ctx->pc = 0x19d20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 9));
    // 0x19d210: 0x3e00008  jr          $ra
    ctx->pc = 0x19D210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D210u;
        // 0x19d214: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D218u;
}
