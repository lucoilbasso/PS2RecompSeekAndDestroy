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

// Function: entry_001bef64
// Address: 0x1bef64 - 0x1bf07c
void entry_001bef64_0x1bef64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bef64_0x1bef64");
#endif

    switch (ctx->pc) {
        case 0x1bef88u: goto label_1bef88;
        case 0x1befc8u: goto label_1befc8;
        case 0x1bf004u: goto label_1bf004;
        case 0x1bf044u: goto label_1bf044;
        default: break;
    }

    ctx->pc = 0x1bef64u;

    // 0x1bef64: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1BEF64u;
    {
        const bool branch_taken_0x1bef64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF64u;
        // 0x1bef68: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef64) {
            ctx->pc = 0x1BF07Cu;
            return;
        }
    }
    ctx->pc = 0x1BEF6Cu;
    // 0x1bef6c: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x1bef6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bef70: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1bef70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef74: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x1bef74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bef78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef7c: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x1bef7cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x1bef80: 0xc0702d0  jal         func_1C0B40
    ctx->pc = 0x1BEF80u;
    SET_GPR_U32(ctx, 31, 0x1BEF88u);
    ctx->pc = 0x1BEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF80u;
    // 0x1bef84: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0B40u, 0x1BEF80u, 0x1BEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF88u;
label_1bef88:
    // 0x1bef88: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bef8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bef8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bef94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bef94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef98: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1bef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1bef9c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bef9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1befa0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1befa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1befa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1befa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befa8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1befa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1befac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1befacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befb0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1befb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1befb4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1befb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1befb8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1befb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1befbc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1befbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befc0: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BEFC0u;
    SET_GPR_U32(ctx, 31, 0x1BEFC8u);
    ctx->pc = 0x1BEFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFC0u;
    // 0x1befc4: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BEFC0u, 0x1BEFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFC8u;
label_1befc8:
    // 0x1befc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1befc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1befcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1befccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befd0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1befd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1befd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1befd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1befd8: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1befd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1befdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1befdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befe0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1befe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1befe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1befe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befe8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1befe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1befec: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1befecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1beff0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1beff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1beff4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1beff4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beff8: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x1beff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x1beffc: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BEFFCu;
    SET_GPR_U32(ctx, 31, 0x1BF004u);
    ctx->pc = 0x1BF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFFCu;
    // 0x1bf000: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BEFFCu, 0x1BF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF004u;
label_1bf004:
    // 0x1bf004: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bf004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1bf008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf00c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bf00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bf010: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf014: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1bf014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1bf018: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1bf018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1bf01c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bf01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bf020: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf024: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1bf024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1bf028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf02c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x1bf02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x1bf030: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf034: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1bf034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1bf038: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf038u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf03c: 0xc06fd42  jal         func_1BF508
    ctx->pc = 0x1BF03Cu;
    SET_GPR_U32(ctx, 31, 0x1BF044u);
    ctx->pc = 0x1BF040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF03Cu;
    // 0x1bf040: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF508u, 0x1BF03Cu, 0x1BF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF044u;
label_1bf044:
    // 0x1bf044: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1bf044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bf048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf04c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1bf04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1bf050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf054: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x1bf054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x1bf058: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf05c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1bf05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1bf060: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bf060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf064: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bf064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1bf068: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1bf068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf06c: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x1bf06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x1bf070: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1bf070u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf074: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1BF074u;
    {
        const bool branch_taken_0x1bf074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF074u;
        // 0x1bf078: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf074) {
            ctx->pc = 0x1BF2C0u;
            return;
        }
    }
    ctx->pc = 0x1BF07Cu;
}
