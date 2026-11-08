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

// Function: litodp
// Address: 0x1ca458 - 0x1ca510
void litodp_0x1ca458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("litodp_0x1ca458");
#endif

    switch (ctx->pc) {
        case 0x1ca4d8u: goto label_1ca4d8;
        case 0x1ca504u: goto label_1ca504;
        default: break;
    }

    ctx->pc = 0x1ca458u;

    // 0x1ca458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca45c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ca45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca460: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1ca460u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1ca464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca468: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ca468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ca46c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA46Cu;
    {
        const bool branch_taken_0x1ca46c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA46Cu;
        // 0x1ca470: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca46c) {
            ctx->pc = 0x1CA480u;
            goto label_1ca480;
        }
    }
    ctx->pc = 0x1CA474u;
    // 0x1ca474: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ca474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca478: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1CA478u;
    {
        const bool branch_taken_0x1ca478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA478u;
        // 0x1ca47c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca478) {
            ctx->pc = 0x1CA4FCu;
            goto label_1ca4fc;
        }
    }
    ctx->pc = 0x1CA480u;
label_1ca480:
    // 0x1ca480: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ca480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ca484: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CA484u;
    {
        const bool branch_taken_0x1ca484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA484u;
        // 0x1ca488: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca484) {
            ctx->pc = 0x1CA4B0u;
            goto label_1ca4b0;
        }
    }
    ctx->pc = 0x1CA48Cu;
    // 0x1ca48c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ca48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ca490: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x1ca490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x1ca494: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ca494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ca498: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA498u;
    {
        const bool branch_taken_0x1ca498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA498u;
        // 0x1ca49c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca498) {
            ctx->pc = 0x1CA508u;
            goto label_1ca508;
        }
    }
    ctx->pc = 0x1CA4A0u;
    // 0x1ca4a0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1ca4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1ca4a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA4A4u;
    {
        const bool branch_taken_0x1ca4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4A4u;
        // 0x1ca4a8: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4a4) {
            ctx->pc = 0x1CA4B4u;
            goto label_1ca4b4;
        }
    }
    ctx->pc = 0x1CA4ACu;
    // 0x1ca4ac: 0x0  nop
    ctx->pc = 0x1ca4acu;
    // NOP
label_1ca4b0:
    // 0x1ca4b0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1ca4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_1ca4b4:
    // 0x1ca4b4: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1ca4b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca4b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ca4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca4bc: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1ca4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1ca4c0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ca4c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ca4c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CA4C4u;
    {
        const bool branch_taken_0x1ca4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4C4u;
        // 0x1ca4c8: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4c4) {
            ctx->pc = 0x1CA4FCu;
            goto label_1ca4fc;
        }
    }
    ctx->pc = 0x1CA4CCu;
    // 0x1ca4cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca4d0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1ca4d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1ca4d4: 0x0  nop
    ctx->pc = 0x1ca4d4u;
    // NOP
label_1ca4d8:
    // 0x1ca4d8: 0x41878  dsll        $v1, $a0, 1
    ctx->pc = 0x1ca4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 1);
    // 0x1ca4dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ca4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ca4e0: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1ca4e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ca4e4: 0x0  nop
    ctx->pc = 0x1ca4e4u;
    // NOP
    // 0x1ca4e8: 0x0  nop
    ctx->pc = 0x1ca4e8u;
    // NOP
    // 0x1ca4ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CA4ECu;
    {
        const bool branch_taken_0x1ca4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4ECu;
        // 0x1ca4f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4ec) {
            ctx->pc = 0x1CA4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4d8;
        }
    }
    ctx->pc = 0x1CA4F4u;
    // 0x1ca4f4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1ca4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1ca4f8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1ca4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1ca4fc:
    // 0x1ca4fc: 0xc073950  jal         func_1CE540
    ctx->pc = 0x1CA4FCu;
    SET_GPR_U32(ctx, 31, 0x1CA504u);
    ctx->pc = 0x1CA500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4FCu;
    // 0x1ca500: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE540u, 0x1CA4FCu, 0x1CA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA504u;
label_1ca504:
    // 0x1ca504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca508:
    // 0x1ca508: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA508u;
        // 0x1ca50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA510u;
}
