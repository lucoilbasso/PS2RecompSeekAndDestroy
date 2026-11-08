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

// Function: _PES_packet
// Address: 0x1bcf78 - 0x1bd528
void ps2__PES_packet_0x1bcf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PES_packet_0x1bcf78");
#endif

    switch (ctx->pc) {
        case 0x1bcfecu: goto label_1bcfec;
        case 0x1bcff8u: goto label_1bcff8;
        case 0x1bd00cu: goto label_1bd00c;
        case 0x1bd0acu: goto label_1bd0ac;
        case 0x1bd0b8u: goto label_1bd0b8;
        case 0x1bd0c8u: goto label_1bd0c8;
        case 0x1bd0d4u: goto label_1bd0d4;
        case 0x1bd0e4u: goto label_1bd0e4;
        case 0x1bd0f4u: goto label_1bd0f4;
        case 0x1bd104u: goto label_1bd104;
        case 0x1bd114u: goto label_1bd114;
        case 0x1bd13cu: goto label_1bd13c;
        case 0x1bd148u: goto label_1bd148;
        case 0x1bd154u: goto label_1bd154;
        case 0x1bd160u: goto label_1bd160;
        case 0x1bd16cu: goto label_1bd16c;
        case 0x1bd178u: goto label_1bd178;
        case 0x1bd184u: goto label_1bd184;
        case 0x1bd1c8u: goto label_1bd1c8;
        case 0x1bd1d4u: goto label_1bd1d4;
        case 0x1bd1e0u: goto label_1bd1e0;
        case 0x1bd1ecu: goto label_1bd1ec;
        case 0x1bd1f8u: goto label_1bd1f8;
        case 0x1bd204u: goto label_1bd204;
        case 0x1bd210u: goto label_1bd210;
        case 0x1bd254u: goto label_1bd254;
        case 0x1bd268u: goto label_1bd268;
        case 0x1bd27cu: goto label_1bd27c;
        case 0x1bd28cu: goto label_1bd28c;
        case 0x1bd29cu: goto label_1bd29c;
        case 0x1bd2acu: goto label_1bd2ac;
        case 0x1bd2bcu: goto label_1bd2bc;
        case 0x1bd2c8u: goto label_1bd2c8;
        case 0x1bd2dcu: goto label_1bd2dc;
        case 0x1bd2e8u: goto label_1bd2e8;
        case 0x1bd2f4u: goto label_1bd2f4;
        case 0x1bd308u: goto label_1bd308;
        case 0x1bd320u: goto label_1bd320;
        case 0x1bd330u: goto label_1bd330;
        case 0x1bd344u: goto label_1bd344;
        case 0x1bd350u: goto label_1bd350;
        case 0x1bd360u: goto label_1bd360;
        case 0x1bd368u: goto label_1bd368;
        case 0x1bd3a8u: goto label_1bd3a8;
        case 0x1bd3e0u: goto label_1bd3e0;
        case 0x1bd408u: goto label_1bd408;
        case 0x1bd49cu: goto label_1bd49c;
        case 0x1bd4c8u: goto label_1bd4c8;
        case 0x1bd4f4u: goto label_1bd4f4;
        default: break;
    }

    ctx->pc = 0x1bcf78u;

    // 0x1bcf78: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bcf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bcf7c: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1bcf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1bcf80: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1bcf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1bcf84: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1bcf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1bcf88: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1bcf88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf8c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1bcf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1bcf90: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1bcf90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf94: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1bcf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1bcf98: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1bcf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bcf9c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1bcf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1bcfa0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1bcfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1bcfa4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1bcfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1bcfa8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1bcfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1bcfac: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1bcfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1bcfb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bcfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1bcfb4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1bcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1bcfb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bcfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bcfbc: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x1bcfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x1bcfc0: 0x2468b220  addiu       $t0, $v1, -0x4DE0
    ctx->pc = 0x1bcfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947360));
    // 0x1bcfc4: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x1bcfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1bcfc8: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x1bcfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1bcfcc: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1bcfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1bcfd0: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1bcfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1bcfd4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1bcfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bcfd8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1bcfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bcfdc: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1bcfdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bcfe0: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1bcfe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bcfe4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCFE4u;
    SET_GPR_U32(ctx, 31, 0x1BCFECu);
    ctx->pc = 0x1BCFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFE4u;
    // 0x1bcfe8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCFE4u, 0x1BCFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFECu;
label_1bcfec:
    // 0x1bcfec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bcfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcff0: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCFF0u;
    SET_GPR_U32(ctx, 31, 0x1BCFF8u);
    ctx->pc = 0x1BCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFF0u;
    // 0x1bcff4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCFF0u, 0x1BCFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFF8u;
label_1bcff8:
    // 0x1bcff8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bcff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bcffc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bcffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd000: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1bd000u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1bd004: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD004u;
    SET_GPR_U32(ctx, 31, 0x1BD00Cu);
    ctx->pc = 0x1BD008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD004u;
    // 0x1bd008: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD004u, 0x1BD00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD00Cu;
label_1bd00c:
    // 0x1bd00c: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x1bd00cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd010: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bd010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd014: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1bd014u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x1bd018: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x1bd018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x1bd01c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd020: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bd020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd024: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x1bd024u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x1bd028: 0x10820115  beq         $a0, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x1BD028u;
    {
        const bool branch_taken_0x1bd028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD028u;
        // 0x1bd02c: 0xfe830018  sd          $v1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd028) {
            ctx->pc = 0x1BD480u;
            goto label_1bd480;
        }
    }
    ctx->pc = 0x1BD030u;
    // 0x1bd030: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x1bd030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x1bd034: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd038: 0x108200f5  beq         $a0, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x1BD038u;
    {
        const bool branch_taken_0x1bd038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd038) {
            ctx->pc = 0x1BD410u;
            goto label_1bd410;
        }
    }
    ctx->pc = 0x1BD040u;
    // 0x1bd040: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1bd040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1bd044: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd048: 0x108200f1  beq         $a0, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1BD048u;
    {
        const bool branch_taken_0x1bd048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd048) {
            ctx->pc = 0x1BD410u;
            goto label_1bd410;
        }
    }
    ctx->pc = 0x1BD050u;
    // 0x1bd050: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x1bd050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1bd054: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd058: 0x108200ed  beq         $a0, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x1BD058u;
    {
        const bool branch_taken_0x1bd058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd058) {
            ctx->pc = 0x1BD410u;
            goto label_1bd410;
        }
    }
    ctx->pc = 0x1BD060u;
    // 0x1bd060: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x1bd060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x1bd064: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd068: 0x108200e9  beq         $a0, $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x1BD068u;
    {
        const bool branch_taken_0x1bd068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd068) {
            ctx->pc = 0x1BD410u;
            goto label_1bd410;
        }
    }
    ctx->pc = 0x1BD070u;
    // 0x1bd070: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1bd070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1bd074: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd078: 0x108200e5  beq         $a0, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x1BD078u;
    {
        const bool branch_taken_0x1bd078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd078) {
            ctx->pc = 0x1BD410u;
            goto label_1bd410;
        }
    }
    ctx->pc = 0x1BD080u;
    // 0x1bd080: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x1bd080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x1bd084: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd088: 0x108200e1  beq         $a0, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1BD088u;
    {
        const bool branch_taken_0x1bd088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd088) {
            ctx->pc = 0x1BD410u;
            goto label_1bd410;
        }
    }
    ctx->pc = 0x1BD090u;
    // 0x1bd090: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1bd090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x1bd094: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd098: 0x108200dd  beq         $a0, $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x1BD098u;
    {
        const bool branch_taken_0x1bd098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd098) {
            ctx->pc = 0x1BD410u;
            goto label_1bd410;
        }
    }
    ctx->pc = 0x1BD0A0u;
    // 0x1bd0a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0a4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD0A4u;
    SET_GPR_U32(ctx, 31, 0x1BD0ACu);
    ctx->pc = 0x1BD0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0A4u;
    // 0x1bd0a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD0A4u, 0x1BD0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0ACu;
label_1bd0ac:
    // 0x1bd0ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0b0: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD0B0u;
    SET_GPR_U32(ctx, 31, 0x1BD0B8u);
    ctx->pc = 0x1BD0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0B0u;
    // 0x1bd0b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD0B0u, 0x1BD0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0B8u;
label_1bd0b8:
    // 0x1bd0b8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x1bd0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x1bd0bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0c0: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD0C0u;
    SET_GPR_U32(ctx, 31, 0x1BD0C8u);
    ctx->pc = 0x1BD0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0C0u;
    // 0x1bd0c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD0C0u, 0x1BD0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0C8u;
label_1bd0c8:
    // 0x1bd0c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0cc: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD0CCu;
    SET_GPR_U32(ctx, 31, 0x1BD0D4u);
    ctx->pc = 0x1BD0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0CCu;
    // 0x1bd0d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD0CCu, 0x1BD0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0D4u;
label_1bd0d4:
    // 0x1bd0d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1bd0d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0dc: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD0DCu;
    SET_GPR_U32(ctx, 31, 0x1BD0E4u);
    ctx->pc = 0x1BD0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0DCu;
    // 0x1bd0e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD0DCu, 0x1BD0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0E4u;
label_1bd0e4:
    // 0x1bd0e4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1bd0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1bd0e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0ec: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD0ECu;
    SET_GPR_U32(ctx, 31, 0x1BD0F4u);
    ctx->pc = 0x1BD0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0ECu;
    // 0x1bd0f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD0ECu, 0x1BD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0F4u;
label_1bd0f4:
    // 0x1bd0f4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1bd0f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd0fc: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD0FCu;
    SET_GPR_U32(ctx, 31, 0x1BD104u);
    ctx->pc = 0x1BD100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD0FCu;
    // 0x1bd100: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD0FCu, 0x1BD104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD104u;
label_1bd104:
    // 0x1bd104: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bd104u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd10c: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD10Cu;
    SET_GPR_U32(ctx, 31, 0x1BD114u);
    ctx->pc = 0x1BD110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD10Cu;
    // 0x1bd110: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD10Cu, 0x1BD114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD114u;
label_1bd114:
    // 0x1bd114: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1bd114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1bd118: 0x32e30002  andi        $v1, $s7, 0x2
    ctx->pc = 0x1bd118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x1bd11c: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x1bd11cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1bd120: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x1bd120u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd124: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x1bd124u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1bd128: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BD128u;
    {
        const bool branch_taken_0x1bd128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD128u;
        // 0x1bd12c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd128) {
            ctx->pc = 0x1BD1B4u;
            goto label_1bd1b4;
        }
    }
    ctx->pc = 0x1BD130u;
    // 0x1bd130: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd134: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD134u;
    SET_GPR_U32(ctx, 31, 0x1BD13Cu);
    ctx->pc = 0x1BD138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD134u;
    // 0x1bd138: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD134u, 0x1BD13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD13Cu;
label_1bd13c:
    // 0x1bd13c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd140: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD140u;
    SET_GPR_U32(ctx, 31, 0x1BD148u);
    ctx->pc = 0x1BD144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD140u;
    // 0x1bd144: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD140u, 0x1BD148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD148u;
label_1bd148:
    // 0x1bd148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd14c: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD14Cu;
    SET_GPR_U32(ctx, 31, 0x1BD154u);
    ctx->pc = 0x1BD150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD14Cu;
    // 0x1bd150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD14Cu, 0x1BD154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD154u;
label_1bd154:
    // 0x1bd154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd158: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD158u;
    SET_GPR_U32(ctx, 31, 0x1BD160u);
    ctx->pc = 0x1BD15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD158u;
    // 0x1bd15c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD158u, 0x1BD160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD160u;
label_1bd160:
    // 0x1bd160: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bd160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd164: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD164u;
    SET_GPR_U32(ctx, 31, 0x1BD16Cu);
    ctx->pc = 0x1BD168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD164u;
    // 0x1bd168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD164u, 0x1BD16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD16Cu;
label_1bd16c:
    // 0x1bd16c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd170: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD170u;
    SET_GPR_U32(ctx, 31, 0x1BD178u);
    ctx->pc = 0x1BD174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD170u;
    // 0x1bd174: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD170u, 0x1BD178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD178u;
label_1bd178:
    // 0x1bd178: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bd178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd17c: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD17Cu;
    SET_GPR_U32(ctx, 31, 0x1BD184u);
    ctx->pc = 0x1BD180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD17Cu;
    // 0x1bd180: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD17Cu, 0x1BD184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD184u;
label_1bd184:
    // 0x1bd184: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x1bd184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x1bd188: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x1bd188u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x1bd18c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1bd18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1bd190: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1bd190u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1bd194: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1bd194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1bd198: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1bd198u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1bd19c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd1a0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1bd1a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bd1a4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd1a8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1bd1a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1bd1ac: 0xfe900010  sd          $s0, 0x10($s4)
    ctx->pc = 0x1bd1acu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 16));
    // 0x1bd1b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd1b4:
    // 0x1bd1b4: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BD1B4u;
    {
        const bool branch_taken_0x1bd1b4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1B4u;
        // 0x1bd1b8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1b4) {
            ctx->pc = 0x1BD240u;
            goto label_1bd240;
        }
    }
    ctx->pc = 0x1BD1BCu;
    // 0x1bd1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1c0: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD1C0u;
    SET_GPR_U32(ctx, 31, 0x1BD1C8u);
    ctx->pc = 0x1BD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1C0u;
    // 0x1bd1c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD1C0u, 0x1BD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1C8u;
label_1bd1c8:
    // 0x1bd1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1cc: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD1CCu;
    SET_GPR_U32(ctx, 31, 0x1BD1D4u);
    ctx->pc = 0x1BD1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1CCu;
    // 0x1bd1d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD1CCu, 0x1BD1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1D4u;
label_1bd1d4:
    // 0x1bd1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1d8: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD1D8u;
    SET_GPR_U32(ctx, 31, 0x1BD1E0u);
    ctx->pc = 0x1BD1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1D8u;
    // 0x1bd1dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD1D8u, 0x1BD1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1E0u;
label_1bd1e0:
    // 0x1bd1e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1e4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD1E4u;
    SET_GPR_U32(ctx, 31, 0x1BD1ECu);
    ctx->pc = 0x1BD1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1E4u;
    // 0x1bd1e8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD1E4u, 0x1BD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1ECu;
label_1bd1ec:
    // 0x1bd1ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bd1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1f0: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD1F0u;
    SET_GPR_U32(ctx, 31, 0x1BD1F8u);
    ctx->pc = 0x1BD1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1F0u;
    // 0x1bd1f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD1F0u, 0x1BD1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1F8u;
label_1bd1f8:
    // 0x1bd1f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1fc: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD1FCu;
    SET_GPR_U32(ctx, 31, 0x1BD204u);
    ctx->pc = 0x1BD200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1FCu;
    // 0x1bd200: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD1FCu, 0x1BD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD204u;
label_1bd204:
    // 0x1bd204: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bd204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd208: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD208u;
    SET_GPR_U32(ctx, 31, 0x1BD210u);
    ctx->pc = 0x1BD20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD208u;
    // 0x1bd20c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD208u, 0x1BD210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD210u;
label_1bd210:
    // 0x1bd210: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x1bd210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x1bd214: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x1bd214u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x1bd218: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1bd218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1bd21c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1bd21cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1bd220: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1bd220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1bd224: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1bd224u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1bd228: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd22c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1bd22cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bd230: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd234: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1bd234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1bd238: 0xfe900018  sd          $s0, 0x18($s4)
    ctx->pc = 0x1bd238u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x1bd23c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1bd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1bd240:
    // 0x1bd240: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bd240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd244: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD244u;
    {
        const bool branch_taken_0x1bd244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1BD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD244u;
        // 0x1bd248: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd244) {
            ctx->pc = 0x1BD254u;
            goto label_1bd254;
        }
    }
    ctx->pc = 0x1BD24Cu;
    // 0x1bd24c: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD24Cu;
    SET_GPR_U32(ctx, 31, 0x1BD254u);
    ctx->pc = 0x1BD250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD24Cu;
    // 0x1bd250: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD24Cu, 0x1BD254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD254u;
label_1bd254:
    // 0x1bd254: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD254u;
    {
        const bool branch_taken_0x1bd254 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD254u;
        // 0x1bd258: 0x3be1021  addu        $v0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd254) {
            ctx->pc = 0x1BD268u;
            goto label_1bd268;
        }
    }
    ctx->pc = 0x1BD25Cu;
    // 0x1bd25c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd260: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD260u;
    SET_GPR_U32(ctx, 31, 0x1BD268u);
    ctx->pc = 0x1BD264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD260u;
    // 0x1bd264: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD260u, 0x1BD268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD268u;
label_1bd268:
    // 0x1bd268: 0x16b00045  bne         $s5, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1BD268u;
    {
        const bool branch_taken_0x1bd268 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x1BD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD268u;
        // 0x1bd26c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd268) {
            ctx->pc = 0x1BD380u;
            goto label_1bd380;
        }
    }
    ctx->pc = 0x1BD270u;
    // 0x1bd270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd274: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD274u;
    SET_GPR_U32(ctx, 31, 0x1BD27Cu);
    ctx->pc = 0x1BD278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD274u;
    // 0x1bd278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD274u, 0x1BD27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD27Cu;
label_1bd27c:
    // 0x1bd27c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd280: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd284: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD284u;
    SET_GPR_U32(ctx, 31, 0x1BD28Cu);
    ctx->pc = 0x1BD288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD284u;
    // 0x1bd288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD284u, 0x1BD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD28Cu;
label_1bd28c:
    // 0x1bd28c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1bd28cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd294: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD294u;
    SET_GPR_U32(ctx, 31, 0x1BD29Cu);
    ctx->pc = 0x1BD298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD294u;
    // 0x1bd298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD294u, 0x1BD29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD29Cu;
label_1bd29c:
    // 0x1bd29c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bd29cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2a4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2A4u;
    SET_GPR_U32(ctx, 31, 0x1BD2ACu);
    ctx->pc = 0x1BD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2A4u;
    // 0x1bd2a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2A4u, 0x1BD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2ACu;
label_1bd2ac:
    // 0x1bd2ac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1bd2acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2b4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2B4u;
    SET_GPR_U32(ctx, 31, 0x1BD2BCu);
    ctx->pc = 0x1BD2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2B4u;
    // 0x1bd2b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2B4u, 0x1BD2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2BCu;
label_1bd2bc:
    // 0x1bd2bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2c0: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2C0u;
    SET_GPR_U32(ctx, 31, 0x1BD2C8u);
    ctx->pc = 0x1BD2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2C0u;
    // 0x1bd2c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2C0u, 0x1BD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2C8u;
label_1bd2c8:
    // 0x1bd2c8: 0x1615000a  bne         $s0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD2C8u;
    {
        const bool branch_taken_0x1bd2c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD2C8u;
        // 0x1bd2cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd2c8) {
            ctx->pc = 0x1BD2F4u;
            goto label_1bd2f4;
        }
    }
    ctx->pc = 0x1BD2D0u;
    // 0x1bd2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2d4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2D4u;
    SET_GPR_U32(ctx, 31, 0x1BD2DCu);
    ctx->pc = 0x1BD2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2D4u;
    // 0x1bd2d8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2D4u, 0x1BD2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2DCu;
label_1bd2dc:
    // 0x1bd2dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2e0: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2E0u;
    SET_GPR_U32(ctx, 31, 0x1BD2E8u);
    ctx->pc = 0x1BD2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2E0u;
    // 0x1bd2e4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2E0u, 0x1BD2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2E8u;
label_1bd2e8:
    // 0x1bd2e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2ec: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD2ECu;
    SET_GPR_U32(ctx, 31, 0x1BD2F4u);
    ctx->pc = 0x1BD2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD2ECu;
    // 0x1bd2f0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD2ECu, 0x1BD2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2F4u;
label_1bd2f4:
    // 0x1bd2f4: 0x17d50006  bne         $fp, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD2F4u;
    {
        const bool branch_taken_0x1bd2f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD2F4u;
        // 0x1bd2f8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd2f4) {
            ctx->pc = 0x1BD310u;
            goto label_1bd310;
        }
    }
    ctx->pc = 0x1BD2FCu;
    // 0x1bd2fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bd2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd300: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BD300u;
    SET_GPR_U32(ctx, 31, 0x1BD308u);
    ctx->pc = 0x1BD304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD300u;
    // 0x1bd304: 0x24a5b230  addiu       $a1, $a1, -0x4DD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BD300u, 0x1BD308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD308u;
label_1bd308:
    // 0x1bd308: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1BD308u;
    {
        const bool branch_taken_0x1bd308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD308u;
        // 0x1bd30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd308) {
            ctx->pc = 0x1BD4F8u;
            goto label_1bd4f8;
        }
    }
    ctx->pc = 0x1BD310u;
label_1bd310:
    // 0x1bd310: 0x16550003  bne         $s2, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD310u;
    {
        const bool branch_taken_0x1bd310 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD310u;
        // 0x1bd314: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd310) {
            ctx->pc = 0x1BD320u;
            goto label_1bd320;
        }
    }
    ctx->pc = 0x1BD318u;
    // 0x1bd318: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD318u;
    SET_GPR_U32(ctx, 31, 0x1BD320u);
    ctx->pc = 0x1BD31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD318u;
    // 0x1bd31c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD318u, 0x1BD320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD320u;
label_1bd320:
    // 0x1bd320: 0x16f50003  bne         $s7, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD320u;
    {
        const bool branch_taken_0x1bd320 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD320u;
        // 0x1bd324: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd320) {
            ctx->pc = 0x1BD330u;
            goto label_1bd330;
        }
    }
    ctx->pc = 0x1BD328u;
    // 0x1bd328: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD328u;
    SET_GPR_U32(ctx, 31, 0x1BD330u);
    ctx->pc = 0x1BD32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD328u;
    // 0x1bd32c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD328u, 0x1BD330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD330u;
label_1bd330:
    // 0x1bd330: 0x16350013  bne         $s1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BD330u;
    {
        const bool branch_taken_0x1bd330 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD330u;
        // 0x1bd334: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd330) {
            ctx->pc = 0x1BD380u;
            goto label_1bd380;
        }
    }
    ctx->pc = 0x1BD338u;
    // 0x1bd338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd33c: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD33Cu;
    SET_GPR_U32(ctx, 31, 0x1BD344u);
    ctx->pc = 0x1BD340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD33Cu;
    // 0x1bd340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD33Cu, 0x1BD344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD344u;
label_1bd344:
    // 0x1bd344: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd348: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD348u;
    SET_GPR_U32(ctx, 31, 0x1BD350u);
    ctx->pc = 0x1BD34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD348u;
    // 0x1bd34c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD348u, 0x1BD350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD350u;
label_1bd350:
    // 0x1bd350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bd350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd354: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD354u;
    {
        const bool branch_taken_0x1bd354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD354u;
        // 0x1bd358: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd354) {
            ctx->pc = 0x1BD380u;
            goto label_1bd380;
        }
    }
    ctx->pc = 0x1BD35Cu;
    // 0x1bd35c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bd360:
    // 0x1bd360: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD360u;
    SET_GPR_U32(ctx, 31, 0x1BD368u);
    ctx->pc = 0x1BD364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD360u;
    // 0x1bd364: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD360u, 0x1BD368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD368u;
label_1bd368:
    // 0x1bd368: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bd368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bd36c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1bd36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bd370: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BD370u;
    {
        const bool branch_taken_0x1bd370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD370u;
        // 0x1bd374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd370) {
            ctx->pc = 0x1BD360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd360;
        }
    }
    ctx->pc = 0x1BD378u;
    // 0x1bd378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD378u;
    {
        const bool branch_taken_0x1bd378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD378u;
        // 0x1bd37c: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd378) {
            ctx->pc = 0x1BD384u;
            goto label_1bd384;
        }
    }
    ctx->pc = 0x1BD380u;
label_1bd380:
    // 0x1bd380: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x1bd380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_1bd384:
    // 0x1bd384: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bd388: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x1bd388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x1bd38c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1bd38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x1bd390: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1bd390u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1bd394: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1bd394u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd398: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD398u;
    {
        const bool branch_taken_0x1bd398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd398) {
            ctx->pc = 0x1BD39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD398u;
            // 0x1bd39c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD3ACu;
            goto label_1bd3ac;
        }
    }
    ctx->pc = 0x1BD3A0u;
    // 0x1bd3a0: 0xc07105e  jal         func_1C4178
    ctx->pc = 0x1BD3A0u;
    SET_GPR_U32(ctx, 31, 0x1BD3A8u);
    ctx->pc = 0x1BD3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3A0u;
    // 0x1bd3a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4178u, 0x1BD3A0u, 0x1BD3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3A8u;
label_1bd3a8:
    // 0x1bd3a8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1bd3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1bd3ac:
    // 0x1bd3ac: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x1bd3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x1bd3b0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1bd3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1bd3b4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bd3b8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1bd3b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd3bc: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bd3c0: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x1bd3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x1bd3c4: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x1bd3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x1bd3c8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1bd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1bd3cc: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD3CCu;
    {
        const bool branch_taken_0x1bd3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1BD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3CCu;
        // 0x1bd3d0: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3cc) {
            ctx->pc = 0x1BD3F8u;
            goto label_1bd3f8;
        }
    }
    ctx->pc = 0x1BD3D4u;
    // 0x1bd3d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd3d8: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD3D8u;
    SET_GPR_U32(ctx, 31, 0x1BD3E0u);
    ctx->pc = 0x1BD3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3D8u;
    // 0x1bd3dc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD3D8u, 0x1BD3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3E0u;
label_1bd3e0:
    // 0x1bd3e0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1bd3e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd3e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd3e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd3ec: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x1bd3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x1bd3f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bd3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bd3f4: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1bd3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1bd3f8:
    // 0x1bd3f8: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1BD3F8u;
    {
        const bool branch_taken_0x1bd3f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3F8u;
        // 0x1bd3fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3f8) {
            ctx->pc = 0x1BD4F8u;
            goto label_1bd4f8;
        }
    }
    ctx->pc = 0x1BD400u;
    // 0x1bd400: 0xc07105e  jal         func_1C4178
    ctx->pc = 0x1BD400u;
    SET_GPR_U32(ctx, 31, 0x1BD408u);
    ctx->pc = 0x1BD404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD400u;
    // 0x1bd404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4178u, 0x1BD400u, 0x1BD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD408u;
label_1bd408:
    // 0x1bd408: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1BD408u;
    {
        const bool branch_taken_0x1bd408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD408u;
        // 0x1bd40c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd408) {
            ctx->pc = 0x1BD4F8u;
            goto label_1bd4f8;
        }
    }
    ctx->pc = 0x1BD410u;
label_1bd410:
    // 0x1bd410: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x1bd410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x1bd414: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd418: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BD418u;
    {
        const bool branch_taken_0x1bd418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd418) {
            ctx->pc = 0x1BD480u;
            goto label_1bd480;
        }
    }
    ctx->pc = 0x1BD420u;
    // 0x1bd420: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1bd420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1bd424: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd428: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD428u;
    {
        const bool branch_taken_0x1bd428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd428) {
            ctx->pc = 0x1BD488u;
            goto label_1bd488;
        }
    }
    ctx->pc = 0x1BD430u;
    // 0x1bd430: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x1bd430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1bd434: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd438: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BD438u;
    {
        const bool branch_taken_0x1bd438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd438) {
            ctx->pc = 0x1BD480u;
            goto label_1bd480;
        }
    }
    ctx->pc = 0x1BD440u;
    // 0x1bd440: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x1bd440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x1bd444: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd448: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BD448u;
    {
        const bool branch_taken_0x1bd448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd448) {
            ctx->pc = 0x1BD480u;
            goto label_1bd480;
        }
    }
    ctx->pc = 0x1BD450u;
    // 0x1bd450: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1bd450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1bd454: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd458: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD458u;
    {
        const bool branch_taken_0x1bd458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd458) {
            ctx->pc = 0x1BD480u;
            goto label_1bd480;
        }
    }
    ctx->pc = 0x1BD460u;
    // 0x1bd460: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x1bd460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x1bd464: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd468: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD468u;
    {
        const bool branch_taken_0x1bd468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd468) {
            ctx->pc = 0x1BD480u;
            goto label_1bd480;
        }
    }
    ctx->pc = 0x1BD470u;
    // 0x1bd470: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1bd470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x1bd474: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd478: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD478u;
    {
        const bool branch_taken_0x1bd478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd478) {
            ctx->pc = 0x1BD4D0u;
            goto label_1bd4d0;
        }
    }
    ctx->pc = 0x1BD480u;
label_1bd480:
    // 0x1bd480: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1bd480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1bd484: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1bd488:
    // 0x1bd488: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD488u;
    {
        const bool branch_taken_0x1bd488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD488u;
        // 0x1bd48c: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd488) {
            ctx->pc = 0x1BD4B4u;
            goto label_1bd4b4;
        }
    }
    ctx->pc = 0x1BD490u;
    // 0x1bd490: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd494: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD494u;
    SET_GPR_U32(ctx, 31, 0x1BD49Cu);
    ctx->pc = 0x1BD498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD494u;
    // 0x1bd498: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD494u, 0x1BD49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD49Cu;
label_1bd49c:
    // 0x1bd49c: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1bd49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1bd4a0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1bd4a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd4a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd4a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd4ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bd4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bd4b0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1bd4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1bd4b4:
    // 0x1bd4b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BD4B4u;
    {
        const bool branch_taken_0x1bd4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4B4u;
        // 0x1bd4b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4b4) {
            ctx->pc = 0x1BD4F8u;
            goto label_1bd4f8;
        }
    }
    ctx->pc = 0x1BD4BCu;
    // 0x1bd4bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4c0: 0xc07105e  jal         func_1C4178
    ctx->pc = 0x1BD4C0u;
    SET_GPR_U32(ctx, 31, 0x1BD4C8u);
    ctx->pc = 0x1BD4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD4C0u;
    // 0x1bd4c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4178u, 0x1BD4C0u, 0x1BD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4C8u;
label_1bd4c8:
    // 0x1bd4c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BD4C8u;
    {
        const bool branch_taken_0x1bd4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4C8u;
        // 0x1bd4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4c8) {
            ctx->pc = 0x1BD4F8u;
            goto label_1bd4f8;
        }
    }
    ctx->pc = 0x1BD4D0u;
label_1bd4d0:
    // 0x1bd4d0: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x1bd4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x1bd4d4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1bd4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1bd4d8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD4D8u;
    {
        const bool branch_taken_0x1bd4d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4D8u;
        // 0x1bd4dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4d8) {
            ctx->pc = 0x1BD4F8u;
            goto label_1bd4f8;
        }
    }
    ctx->pc = 0x1BD4E0u;
    // 0x1bd4e0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1bd4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bd4e4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD4E4u;
    {
        const bool branch_taken_0x1bd4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4E4u;
        // 0x1bd4e8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4e4) {
            ctx->pc = 0x1BD4FCu;
            goto label_1bd4fc;
        }
    }
    ctx->pc = 0x1BD4ECu;
    // 0x1bd4ec: 0xc07105e  jal         func_1C4178
    ctx->pc = 0x1BD4ECu;
    SET_GPR_U32(ctx, 31, 0x1BD4F4u);
    ctx->pc = 0x1BD4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD4ECu;
    // 0x1bd4f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4178u, 0x1BD4ECu, 0x1BD4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4F4u;
label_1bd4f4:
    // 0x1bd4f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd4f8:
    // 0x1bd4f8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1bd4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1bd4fc:
    // 0x1bd4fc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1bd4fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bd500: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1bd500u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bd504: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1bd504u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bd508: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1bd508u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bd50c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1bd50cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bd510: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1bd510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bd514: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1bd514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bd518: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1bd518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd51c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bd51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd520: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD520u;
        // 0x1bd524: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD528u;
}
