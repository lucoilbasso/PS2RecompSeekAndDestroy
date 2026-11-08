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

// Function: entry_001d2e28
// Address: 0x1d2e28 - 0x1d2ea0
void entry_001d2e28_0x1d2e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2e28_0x1d2e28");
#endif

    ctx->pc = 0x1d2e28u;

label_1d2e28:
    // 0x1d2e28: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1d2e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2e2c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1d2e2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1d2e30: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1d2e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d2e34: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x1d2e34u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1d2e38: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1d2e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1d2e3c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1d2e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1d2e40: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x1d2e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d2e44: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x1d2e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d2e48: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d2e4c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1d2e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d2e50: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d2e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d2e54: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1d2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d2e58: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d2e5c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d2e60: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1d2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1d2e64: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x1d2e64u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x1d2e68: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x1d2e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1d2e6c: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x1d2e6cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1d2e70: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1d2e70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d2e74: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x1d2e74u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d2e78: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x1d2e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1d2e7c: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1d2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1d2e80: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x1d2e80u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d2e84: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1d2e84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1d2e88: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D2E88u;
    {
        const bool branch_taken_0x1d2e88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E88u;
        // 0x1d2e8c: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e88) {
            ctx->pc = 0x1D2E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2e28;
        }
    }
    ctx->pc = 0x1D2E90u;
    // 0x1d2e90: 0x55a0000e  bnel        $t5, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2E90u;
    {
        const bool branch_taken_0x1d2e90 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e90) {
            ctx->pc = 0x1D2E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2E90u;
            // 0x1d2e94: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2ECCu;
            return;
        }
    }
    ctx->pc = 0x1D2E98u;
    // 0x1d2e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2E98u;
    {
        const bool branch_taken_0x1d2e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E98u;
        // 0x1d2e9c: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e98) {
            ctx->pc = 0x1D2EA4u;
            return;
        }
    }
    ctx->pc = 0x1D2EA0u;
}
