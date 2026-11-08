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

// Function: entry_001514a0
// Address: 0x1514a0 - 0x1514e8
void entry_001514a0_0x1514a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001514a0_0x1514a0");
#endif

    ctx->pc = 0x1514a0u;

    // 0x1514a0: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x1514a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x1514a4: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x1514a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1514a8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1514A8u;
    {
        const bool branch_taken_0x1514a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514A8u;
        // 0x1514ac: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514a8) {
            ctx->pc = 0x151658u;
            return;
        }
    }
    ctx->pc = 0x1514B0u;
    // 0x1514b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1514b4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1514b8: 0xc60103b8  lwc1        $f1, 0x3B8($s0)
    ctx->pc = 0x1514b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1514bc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1514bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514c0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1514c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1514c4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1514c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1514c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1514c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1514cc: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x1514ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1514d0: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x1514d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1514d4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1514d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1514d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1514D8u;
    {
        const bool branch_taken_0x1514d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514D8u;
        // 0x1514dc: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514d8) {
            ctx->pc = 0x1514E8u;
            return;
        }
    }
    ctx->pc = 0x1514E0u;
    // 0x1514e0: 0xc061920  jal         func_186480
    ctx->pc = 0x1514E0u;
    SET_GPR_U32(ctx, 31, 0x1514E8u);
    ctx->pc = 0x1514E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514E0u;
    // 0x1514e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1514E0u, 0x1514E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514E8u;
}
