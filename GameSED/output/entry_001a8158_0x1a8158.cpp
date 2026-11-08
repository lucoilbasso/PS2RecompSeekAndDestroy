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

// Function: entry_001a8158
// Address: 0x1a8158 - 0x1a81a8
void entry_001a8158_0x1a8158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8158_0x1a8158");
#endif

    ctx->pc = 0x1a8158u;

    // 0x1a8158: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a815c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8160: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a8164: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a8164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a8168: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a8168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a816c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a8170: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1a8170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a8174: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a8178: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A8178u;
    {
        const bool branch_taken_0x1a8178 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8178u;
        // 0x1a817c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8178) {
            ctx->pc = 0x1A8250u;
            return;
        }
    }
    ctx->pc = 0x1A8180u;
    // 0x1a8180: 0x3c147ffe  lui         $s4, 0x7FFE
    ctx->pc = 0x1a8180u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8184: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a8184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1a8188: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a8188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a818c: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x1a818cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a8190: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1a8190u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x1a8194: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x1a8194u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
    // 0x1a8198: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1a8198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a819c: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a81a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a81a4: 0x0  nop
    ctx->pc = 0x1a81a4u;
    // NOP
    ctx->pc = 0x1a81a8u;
}
