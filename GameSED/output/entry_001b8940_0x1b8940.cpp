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

// Function: entry_001b8940
// Address: 0x1b8940 - 0x1b89b4
void entry_001b8940_0x1b8940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8940_0x1b8940");
#endif

    switch (ctx->pc) {
        case 0x1b8984u: goto label_1b8984;
        case 0x1b89a4u: goto label_1b89a4;
        default: break;
    }

    ctx->pc = 0x1b8940u;

    // 0x1b8940: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1b8940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b8944: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1b8944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1b8948: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x1b8948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1b894c: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x1b894cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b8950: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1b8950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b8954: 0x2673d410  addiu       $s3, $s3, -0x2BF0
    ctx->pc = 0x1b8954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956048));
    // 0x1b8958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b895c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1b895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b8960: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b8960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b8964: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x1b8964u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1b8968: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1b8968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1b896c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1b896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1b8970: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b8970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b8974: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1b8974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b8978: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1b8978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1b897c: 0xc06bf56  jal         func_1AFD58
    ctx->pc = 0x1B897Cu;
    SET_GPR_U32(ctx, 31, 0x1B8984u);
    ctx->pc = 0x1B8980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B897Cu;
    // 0x1b8980: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD58u, 0x1B897Cu, 0x1B8984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8984u;
label_1b8984:
    // 0x1b8984: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1b8984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b8988: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1b8988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1b898c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1b898cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1b8990: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b8990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8994: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1b8994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1b8998: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b899c: 0xc06be08  jal         func_1AF820
    ctx->pc = 0x1B899Cu;
    SET_GPR_U32(ctx, 31, 0x1B89A4u);
    ctx->pc = 0x1B89A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B899Cu;
    // 0x1b89a0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF820u, 0x1B899Cu, 0x1B89A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B89A4u;
label_1b89a4:
    // 0x1b89a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b89a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b89a8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B89A8u;
    {
        const bool branch_taken_0x1b89a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B89A8u;
        // 0x1b89ac: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b89a8) {
            ctx->pc = 0x1B89D0u;
            return;
        }
    }
    ctx->pc = 0x1B89B0u;
    // 0x1b89b0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b89b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1b89b4u;
}
