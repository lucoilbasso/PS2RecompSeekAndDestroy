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

// Function: WObjectGetSendPacketFlags__FP8WcObjectP12VPUtilPreset
// Address: 0x194e78 - 0x194f18
void WObjectGetSendPacketFlags__FP8WcObjectP12VPUtilPreset_0x194e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WObjectGetSendPacketFlags__FP8WcObjectP12VPUtilPreset_0x194e78");
#endif

    ctx->pc = 0x194e78u;

    // 0x194e78: 0x24890150  addiu       $t1, $a0, 0x150
    ctx->pc = 0x194e78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x194e7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x194e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194e80: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x194e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x194e84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x194e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e88: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x194e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e8c: 0x30430800  andi        $v1, $v0, 0x800
    ctx->pc = 0x194e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x194e90: 0x30480100  andi        $t0, $v0, 0x100
    ctx->pc = 0x194e90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x194e94: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x194e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x194e98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194E98u;
    {
        const bool branch_taken_0x194e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E98u;
        // 0x194e9c: 0x83300a  movz        $a2, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e98) {
            ctx->pc = 0x194EB0u;
            goto label_194eb0;
        }
    }
    ctx->pc = 0x194EA0u;
    // 0x194ea0: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x194ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x194EA4u;
    {
        const bool branch_taken_0x194ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EA4u;
        // 0x194ea8: 0x34c60200  ori         $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ea4) {
            ctx->pc = 0x194EB8u;
            goto label_194eb8;
        }
    }
    ctx->pc = 0x194EACu;
    // 0x194eac: 0x0  nop
    ctx->pc = 0x194eacu;
    // NOP
label_194eb0:
    // 0x194eb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x194eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x194eb4: 0x48380b  movn        $a3, $v0, $t0
    ctx->pc = 0x194eb4u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_194eb8:
    // 0x194eb8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x194eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x194ebc: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x194ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x194ec0: 0x30484000  andi        $t0, $v0, 0x4000
    ctx->pc = 0x194ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x194ec4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x194ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x194ec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194EC8u;
    {
        const bool branch_taken_0x194ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EC8u;
        // 0x194ecc: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ec8) {
            ctx->pc = 0x194ED8u;
            goto label_194ed8;
        }
    }
    ctx->pc = 0x194ED0u;
    // 0x194ed0: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x194ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x194ed4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x194ed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_194ed8:
    // 0x194ed8: 0x34c20040  ori         $v0, $a2, 0x40
    ctx->pc = 0x194ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x194edc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x194edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x194ee0: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x194ee0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x194ee4: 0x34c30100  ori         $v1, $a2, 0x100
    ctx->pc = 0x194ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x194ee8: 0x68300a  movz        $a2, $v1, $t0
    ctx->pc = 0x194ee8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x194eec: 0x54860005  bnel        $a0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x194EECu;
    {
        const bool branch_taken_0x194eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x194eec) {
            ctx->pc = 0x194EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194EECu;
            // 0x194ef0: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194F04u;
            goto label_194f04;
        }
    }
    ctx->pc = 0x194EF4u;
    // 0x194ef4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x194ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x194ef8: 0x10470005  beq         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x194EF8u;
    {
        const bool branch_taken_0x194ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x194ef8) {
            ctx->pc = 0x194F10u;
            goto label_194f10;
        }
    }
    ctx->pc = 0x194F00u;
    // 0x194f00: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x194f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_194f04:
    // 0x194f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194f08: 0x3e00008  jr          $ra
    ctx->pc = 0x194F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F08u;
        // 0x194f0c: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194F10u;
label_194f10:
    // 0x194f10: 0x3e00008  jr          $ra
    ctx->pc = 0x194F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F10u;
        // 0x194f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194F18u;
}
