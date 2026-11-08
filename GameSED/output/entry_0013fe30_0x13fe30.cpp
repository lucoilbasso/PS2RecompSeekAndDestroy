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

// Function: entry_0013fe30
// Address: 0x13fe30 - 0x13fec0
void entry_0013fe30_0x13fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fe30_0x13fe30");
#endif

    switch (ctx->pc) {
        case 0x13fe50u: goto label_13fe50;
        case 0x13fe90u: goto label_13fe90;
        case 0x13feb8u: goto label_13feb8;
        default: break;
    }

    ctx->pc = 0x13fe30u;

    // 0x13fe30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13fe34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13fe38: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13fe38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13fe40: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13fe44: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13fe48: 0xc04fbc0  jal         func_13EF00
    ctx->pc = 0x13FE48u;
    SET_GPR_U32(ctx, 31, 0x13FE50u);
    ctx->pc = 0x13FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE48u;
    // 0x13fe4c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF00u, 0x13FE48u, 0x13FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE50u;
label_13fe50:
    // 0x13fe50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13fe50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe54: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x13fe58: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x13fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13fe5c: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x13fe60: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x13fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x13fe64: 0x2442ff68  addiu       $v0, $v0, -0x98
    ctx->pc = 0x13fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967144));
    // 0x13fe68: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13fe68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13fe6c: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x13fe70: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x13fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x13fe74: 0x265400c0  addiu       $s4, $s2, 0xC0
    ctx->pc = 0x13fe74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x13fe78: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x13fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x13fe7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13fe7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe80: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x13fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x13fe84: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13fe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe88: 0xc05053c  jal         func_1414F0
    ctx->pc = 0x13FE88u;
    SET_GPR_U32(ctx, 31, 0x13FE90u);
    ctx->pc = 0x13FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE88u;
    // 0x13fe8c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1414F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414F0u, 0x13FE88u, 0x13FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE90u;
label_13fe90:
    // 0x13fe90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13fe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe98: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FE98u;
    {
        const bool branch_taken_0x13fe98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE98u;
        // 0x13fe9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe98) {
            ctx->pc = 0x13FEC0u;
            return;
        }
    }
    ctx->pc = 0x13FEA0u;
    // 0x13fea0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x13fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13fea4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x13fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x13fea8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x13feac: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x13feacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x13feb0: 0xc050a66  jal         func_142998
    ctx->pc = 0x13FEB0u;
    SET_GPR_U32(ctx, 31, 0x13FEB8u);
    ctx->pc = 0x13FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEB0u;
    // 0x13feb4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142998u, 0x13FEB0u, 0x13FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEB8u;
label_13feb8:
    // 0x13feb8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13FEB8u;
    {
        const bool branch_taken_0x13feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEB8u;
        // 0x13febc: 0xde640000  ld          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13feb8) {
            ctx->pc = 0x13FEECu;
            return;
        }
    }
    ctx->pc = 0x13FEC0u;
}
