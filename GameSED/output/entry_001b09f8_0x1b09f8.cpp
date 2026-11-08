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

// Function: entry_001b09f8
// Address: 0x1b09f8 - 0x1b0a74
void entry_001b09f8_0x1b09f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b09f8_0x1b09f8");
#endif

    ctx->pc = 0x1b09f8u;

    // 0x1b09f8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b09f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b09fc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1b09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1b0a00: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1b0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b0a04: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1b0a04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1b0a08: 0x2c830049  sltiu       $v1, $a0, 0x49
    ctx->pc = 0x1b0a08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)73) ? 1 : 0);
    // 0x1b0a0c: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x1B0A0Cu;
    {
        const bool branch_taken_0x1b0a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A0Cu;
        // 0x1b0a10: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a0c) {
            ctx->pc = 0x1B0F30u;
            return;
        }
    }
    ctx->pc = 0x1B0A14u;
    // 0x1b0a14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b0a18: 0x2442aaf0  addiu       $v0, $v0, -0x5510
    ctx->pc = 0x1b0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x1b0a1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0a20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b0a24: 0x800008  jr          $a0
    ctx->pc = 0x1B0A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0A2Cu: goto label_1b0a2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B0A2Cu;
label_1b0a2c:
    // 0x1b0a2c: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x1b0a2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1b0a30: 0x2465ffd0  addiu       $a1, $v1, -0x30
    ctx->pc = 0x1b0a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1b0a34: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1b0a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b0a38: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1b0a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1b0a3c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B0A3Cu;
    {
        const bool branch_taken_0x1b0a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A3Cu;
        // 0x1b0a40: 0x82460002  lb          $a2, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a3c) {
            ctx->pc = 0x1B0AB4u;
            return;
        }
    }
    ctx->pc = 0x1B0A44u;
    // 0x1b0a44: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x1b0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x1b0a48: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1b0a48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1b0a4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0A4Cu;
    {
        const bool branch_taken_0x1b0a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A4Cu;
        // 0x1b0a50: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a4c) {
            ctx->pc = 0x1B0A74u;
            return;
        }
    }
    ctx->pc = 0x1B0A54u;
    // 0x1b0a54: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1b0a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b0a58: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1b0a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b0a5c: 0x26500002  addiu       $s0, $s2, 0x2
    ctx->pc = 0x1b0a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1b0a60: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1b0a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1b0a64: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1b0a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b0a68: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1b0a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b0a6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0A6Cu;
    {
        const bool branch_taken_0x1b0a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A6Cu;
        // 0x1b0a70: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a6c) {
            ctx->pc = 0x1B0A78u;
            return;
        }
    }
    ctx->pc = 0x1B0A74u;
}
