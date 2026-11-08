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

// Function: sjis2jis
// Address: 0x1ae080 - 0x1ae0f4
void sjis2jis_0x1ae080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sjis2jis_0x1ae080");
#endif

    ctx->pc = 0x1ae080u;

    // 0x1ae080: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1ae080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1ae084: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x1ae084u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1ae088: 0x2ca200a0  sltiu       $v0, $a1, 0xA0
    ctx->pc = 0x1ae088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x1ae08c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE08Cu;
    {
        const bool branch_taken_0x1ae08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE08Cu;
        // 0x1ae090: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae08c) {
            ctx->pc = 0x1AE09Cu;
            goto label_1ae09c;
        }
    }
    ctx->pc = 0x1AE094u;
    // 0x1ae094: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE094u;
    {
        const bool branch_taken_0x1ae094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE094u;
        // 0x1ae098: 0x24a2ff8f  addiu       $v0, $a1, -0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae094) {
            ctx->pc = 0x1AE0A0u;
            goto label_1ae0a0;
        }
    }
    ctx->pc = 0x1AE09Cu;
label_1ae09c:
    // 0x1ae09c: 0x24a2ff4f  addiu       $v0, $a1, -0xB1
    ctx->pc = 0x1ae09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967119));
label_1ae0a0:
    // 0x1ae0a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae0a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ae0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ae0a8: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1ae0ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ae0b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE0B0u;
    {
        const bool branch_taken_0x1ae0b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AE0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0B0u;
        // 0x1ae0b4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0b0) {
            ctx->pc = 0x1AE0C0u;
            goto label_1ae0c0;
        }
    }
    ctx->pc = 0x1AE0B8u;
    // 0x1ae0b8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1ae0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ae0bc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ae0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ae0c0:
    // 0x1ae0c0: 0x2c82009e  sltiu       $v0, $a0, 0x9E
    ctx->pc = 0x1ae0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)158) ? 1 : 0);
    // 0x1ae0c4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE0C4u;
    {
        const bool branch_taken_0x1ae0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae0c4) {
            ctx->pc = 0x1AE0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE0C4u;
            // 0x1ae0c8: 0x2482ffe1  addiu       $v0, $a0, -0x1F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967265));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE0E0u;
            goto label_1ae0e0;
        }
    }
    ctx->pc = 0x1AE0CCu;
    // 0x1ae0cc: 0x2482ff83  addiu       $v0, $a0, -0x7D
    ctx->pc = 0x1ae0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967171));
    // 0x1ae0d0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1ae0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ae0d4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ae0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae0d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE0D8u;
    {
        const bool branch_taken_0x1ae0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0D8u;
        // 0x1ae0dc: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0d8) {
            ctx->pc = 0x1AE0E4u;
            goto label_1ae0e4;
        }
    }
    ctx->pc = 0x1AE0E0u;
label_1ae0e0:
    // 0x1ae0e0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1ae0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ae0e4:
    // 0x1ae0e4: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x1ae0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1ae0e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ae0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ae0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0ECu;
        // 0x1ae0f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE0F4u;
}
