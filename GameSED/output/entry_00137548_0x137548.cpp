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

// Function: entry_00137548
// Address: 0x137548 - 0x1375a8
void entry_00137548_0x137548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137548_0x137548");
#endif

    ctx->pc = 0x137548u;

    // 0x137548: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x137548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x13754c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x13754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x137550: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x137550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x137554: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x137554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x137558: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x137558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x13755c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x13755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x137560: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x137560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x137564: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x137564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x137568: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x137568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13756c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x13756cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x137570: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x137570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x137574: 0x146400b7  bne         $v1, $a0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x137574u;
    {
        const bool branch_taken_0x137574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x137578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137574u;
        // 0x137578: 0xafa70014  sw          $a3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137574) {
            ctx->pc = 0x137854u;
            return;
        }
    }
    ctx->pc = 0x13757Cu;
    // 0x13757c: 0x8fc20170  lw          $v0, 0x170($fp)
    ctx->pc = 0x13757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 368)));
    // 0x137580: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x137580u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137584: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x137584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137588: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x137588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13758c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13758cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137590: 0x12a000b0  beqz        $s5, . + 4 + (0xB0 << 2)
    ctx->pc = 0x137590u;
    {
        const bool branch_taken_0x137590 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x137594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137590u;
        // 0x137594: 0x8c760200  lw          $s6, 0x200($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137590) {
            ctx->pc = 0x137854u;
            return;
        }
    }
    ctx->pc = 0x137598u;
    // 0x137598: 0x12c000ab  beqz        $s6, . + 4 + (0xAB << 2)
    ctx->pc = 0x137598u;
    {
        const bool branch_taken_0x137598 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x13759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137598u;
        // 0x13759c: 0x3c040020  lui         $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137598) {
            ctx->pc = 0x137848u;
            return;
        }
    }
    ctx->pc = 0x1375A0u;
    // 0x1375a0: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x1375a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1375a4: 0x0  nop
    ctx->pc = 0x1375a4u;
    // NOP
    ctx->pc = 0x1375a8u;
}
