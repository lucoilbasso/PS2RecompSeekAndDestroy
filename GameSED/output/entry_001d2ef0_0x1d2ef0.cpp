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

// Function: entry_001d2ef0
// Address: 0x1d2ef0 - 0x1d2f70
void entry_001d2ef0_0x1d2ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2ef0_0x1d2ef0");
#endif

    ctx->pc = 0x1d2ef0u;

label_1d2ef0:
    // 0x1d2ef0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1d2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2ef4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1d2ef4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1d2ef8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1d2ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d2efc: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x1d2efcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1d2f00: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1d2f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1d2f04: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x1d2f04u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1d2f08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2f0c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1d2f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d2f10: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1d2f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d2f14: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1d2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d2f18: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x1d2f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d2f1c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d2f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2f20: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1d2f24: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1d2f24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1d2f28: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x1d2f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1d2f2c: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x1d2f2cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1d2f30: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1d2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d2f34: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x1d2f34u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d2f38: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1d2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1d2f3c: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1d2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1d2f40: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x1d2f40u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d2f44: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1d2f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1d2f48: 0x10e0ffe9  beqz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D2F48u;
    {
        const bool branch_taken_0x1d2f48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F48u;
        // 0x1d2f4c: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f48) {
            ctx->pc = 0x1D2EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2ef0;
        }
    }
    ctx->pc = 0x1D2F50u;
    // 0x1d2f50: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d2f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d2f54: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x1d2f54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d2f58: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1d2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d2f5c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D2F5Cu;
    {
        const bool branch_taken_0x1d2f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F5Cu;
        // 0x1d2f60: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f5c) {
            ctx->pc = 0x1D2F9Cu;
            return;
        }
    }
    ctx->pc = 0x1D2F64u;
    // 0x1d2f64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2F64u;
    {
        const bool branch_taken_0x1d2f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F64u;
        // 0x1d2f68: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f64) {
            ctx->pc = 0x1D2F74u;
            return;
        }
    }
    ctx->pc = 0x1D2F6Cu;
    // 0x1d2f6c: 0x0  nop
    ctx->pc = 0x1d2f6cu;
    // NOP
    ctx->pc = 0x1d2f70u;
}
