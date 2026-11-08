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

// Function: quorem
// Address: 0x1d2d98 - 0x1d2fc4
void quorem_0x1d2d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quorem_0x1d2d98");
#endif

    switch (ctx->pc) {
        case 0x1d2e28u: goto label_1d2e28;
        case 0x1d2ea0u: goto label_1d2ea0;
        case 0x1d2ed4u: goto label_1d2ed4;
        case 0x1d2ef0u: goto label_1d2ef0;
        case 0x1d2f70u: goto label_1d2f70;
        default: break;
    }

    ctx->pc = 0x1d2d98u;

    // 0x1d2d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d2d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d2d9c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1d2d9cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2da0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d2da4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d2da4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d2dac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d2dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d2db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d2db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d2db4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d2db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d2db8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d2db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d2dbc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d2dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d2dc0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1d2dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1d2dc4: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x1d2dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1d2dc8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1d2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1d2dcc: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1d2dccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d2dd0: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1D2DD0u;
    {
        const bool branch_taken_0x1d2dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DD0u;
        // 0x1d2dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dd0) {
            ctx->pc = 0x1D2F9Cu;
            goto label_1d2f9c;
        }
    }
    ctx->pc = 0x1D2DD8u;
    // 0x1d2dd8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d2ddc: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x1d2ddcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x1d2de0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d2de4: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x1d2de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x1d2de8: 0x1629821  addu        $s3, $t3, $v0
    ctx->pc = 0x1d2de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1d2dec: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x1d2decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d2df0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d2df4: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x1d2df4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2df8: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d2dfc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d2dfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2e04: 0x1a3001b  divu        $zero, $t5, $v1
    ctx->pc = 0x1d2e04u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x1d2e08: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D2E08u;
    {
        const bool branch_taken_0x1d2e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e08) {
            ctx->pc = 0x1D2E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2E08u;
            // 0x1d2e0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2E10u;
            goto label_1d2e10;
        }
    }
    ctx->pc = 0x1D2E10u;
label_1d2e10:
    // 0x1d2e10: 0xa812  mflo        $s5
    ctx->pc = 0x1d2e10u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1d2e14: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1d2e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e18: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D2E18u;
    {
        const bool branch_taken_0x1d2e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E18u;
        // 0x1d2e1c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e18) {
            ctx->pc = 0x1D2EC8u;
            goto label_1d2ec8;
        }
    }
    ctx->pc = 0x1D2E20u;
    // 0x1d2e20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d2e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e24: 0x0  nop
    ctx->pc = 0x1d2e24u;
    // NOP
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
            goto label_1d2ecc;
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
            goto label_1d2ea4;
        }
    }
    ctx->pc = 0x1D2EA0u;
label_1d2ea0:
    // 0x1d2ea0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d2ea4:
    // 0x1d2ea4: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x1d2ea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1d2ea8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2EA8u;
    {
        const bool branch_taken_0x1d2ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ea8) {
            ctx->pc = 0x1D2EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2EA8u;
            // 0x1d2eac: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2EC8u;
            goto label_1d2ec8;
        }
    }
    ctx->pc = 0x1D2EB0u;
    // 0x1d2eb0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1d2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d2eb4: 0x0  nop
    ctx->pc = 0x1d2eb4u;
    // NOP
    // 0x1d2eb8: 0x0  nop
    ctx->pc = 0x1d2eb8u;
    // NOP
    // 0x1d2ebc: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D2EBCu;
    {
        const bool branch_taken_0x1d2ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ebc) {
            ctx->pc = 0x1D2EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2EBCu;
            // 0x1d2ec0: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2ea0;
        }
    }
    ctx->pc = 0x1D2EC4u;
    // 0x1d2ec4: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x1d2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_1d2ec8:
    // 0x1d2ec8: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x1d2ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ecc:
    // 0x1d2ecc: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D2ECCu;
    SET_GPR_U32(ctx, 31, 0x1D2ED4u);
    ctx->pc = 0x1D2ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2ECCu;
    // 0x1d2ed0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D2ECCu, 0x1D2ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2ED4u;
label_1d2ed4:
    // 0x1d2ed4: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D2ED4u;
    {
        const bool branch_taken_0x1d2ed4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ED4u;
        // 0x1d2ed8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ed4) {
            ctx->pc = 0x1D2F98u;
            goto label_1d2f98;
        }
    }
    ctx->pc = 0x1D2EDCu;
    // 0x1d2edc: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x1d2edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d2ee0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1d2ee0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ee4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d2ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ee8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d2ee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2eec: 0x0  nop
    ctx->pc = 0x1d2eecu;
    // NOP
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
            goto label_1d2f9c;
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
            goto label_1d2f74;
        }
    }
    ctx->pc = 0x1D2F6Cu;
    // 0x1d2f6c: 0x0  nop
    ctx->pc = 0x1d2f6cu;
    // NOP
label_1d2f70:
    // 0x1d2f70: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d2f74:
    // 0x1d2f74: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x1d2f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1d2f78: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2F78u;
    {
        const bool branch_taken_0x1d2f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f78) {
            ctx->pc = 0x1D2F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2F78u;
            // 0x1d2f7c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2F98u;
            goto label_1d2f98;
        }
    }
    ctx->pc = 0x1D2F80u;
    // 0x1d2f80: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1d2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d2f84: 0x0  nop
    ctx->pc = 0x1d2f84u;
    // NOP
    // 0x1d2f88: 0x0  nop
    ctx->pc = 0x1d2f88u;
    // NOP
    // 0x1d2f8c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D2F8Cu;
    {
        const bool branch_taken_0x1d2f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f8c) {
            ctx->pc = 0x1D2F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2F8Cu;
            // 0x1d2f90: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2f70;
        }
    }
    ctx->pc = 0x1D2F94u;
    // 0x1d2f94: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x1d2f94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_1d2f98:
    // 0x1d2f98: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d2f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f9c:
    // 0x1d2f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d2fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d2fa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d2fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2fa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d2fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2fac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d2facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2fb0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d2fb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d2fb4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d2fb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2fb8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1d2fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d2fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2FBCu;
        // 0x1d2fc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2FC4u;
}
