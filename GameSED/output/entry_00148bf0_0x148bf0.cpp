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

// Function: entry_00148bf0
// Address: 0x148bf0 - 0x148ca8
void entry_00148bf0_0x148bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148bf0_0x148bf0");
#endif

    switch (ctx->pc) {
        case 0x148c14u: goto label_148c14;
        case 0x148c58u: goto label_148c58;
        default: break;
    }

    ctx->pc = 0x148bf0u;

    // 0x148bf0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x148bf4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x148bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x148bf8: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x148bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x148bfc: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x148bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x148c00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x148c00u;
    runtime->Store32(rdram, ctx, 0x10003C00u, GPR_U32(ctx, 0));
    // 0x148c04: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x148c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c08: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x148c08u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 0));
    // 0x148c0c: 0xc06af0c  jal         func_1ABC30
    ctx->pc = 0x148C0Cu;
    SET_GPR_U32(ctx, 31, 0x148C14u);
    ctx->pc = 0x1ABC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC30u, 0x148C0Cu, 0x148C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C14u;
label_148c14:
    // 0x148c14: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x148c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x148c18: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x148c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x148c1c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148c20: 0x244243c0  addiu       $v0, $v0, 0x43C0
    ctx->pc = 0x148c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17344));
    // 0x148c24: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x148c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x148c28: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x148c28u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x2043C0u));
    // 0x148c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x148c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x148c30: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x148c30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x148c34: 0x3c070600  lui         $a3, 0x600
    ctx->pc = 0x148c34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1536 << 16));
    // 0x148c38: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x148c38u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 2));
    // 0x148c3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x148c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c40: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x148c40u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 6));
    // 0x148c44: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x148c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x148c48: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x148c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x148c4c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x148c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x148c50: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x148C50u;
    SET_GPR_U32(ctx, 31, 0x148C58u);
    ctx->pc = 0x148C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148C50u;
    // 0x148c54: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x148C50u, 0x148C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C58u;
label_148c58:
    // 0x148c58: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x148c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x148c5c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x148c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x148c60: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x148c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x148c64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x148c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x148c68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148c6c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x148c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x148c70: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x148c74: 0x34a59020  ori         $a1, $a1, 0x9020
    ctx->pc = 0x148c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36896);
    // 0x148c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x148c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148c7c: 0x34849010  ori         $a0, $a0, 0x9010
    ctx->pc = 0x148c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36880);
    // 0x148c80: 0x24070101  addiu       $a3, $zero, 0x101
    ctx->pc = 0x148c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x148c84: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x148c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x148c88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x148c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x148c8c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x148c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x148c90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148c94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148c98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x148C98u;
    {
        const bool branch_taken_0x148c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148C98u;
        // 0x148c9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c98) {
            ctx->pc = 0x148CCCu;
            return;
        }
    }
    ctx->pc = 0x148CA0u;
    // 0x148ca0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x148ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x148ca4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x148ca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148ca8u;
}
