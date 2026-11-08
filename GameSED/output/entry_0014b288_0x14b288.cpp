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

// Function: entry_0014b288
// Address: 0x14b288 - 0x14b2c8
void entry_0014b288_0x14b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b288_0x14b288");
#endif

    ctx->pc = 0x14b288u;

    // 0x14b288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14b28c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14b290: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x14b290u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x14b294: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x14b294u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14b298: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x14b298u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14b29c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x14b29cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14b2a0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x14b2a4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x14b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14b2a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b2ac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14b2b0: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B2B0u;
    {
        const bool branch_taken_0x14b2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B2B0u;
        // 0x14b2b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b2b0) {
            ctx->pc = 0x14B2C8u;
            return;
        }
    }
    ctx->pc = 0x14B2B8u;
    // 0x14b2b8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14b2bc: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14b2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14b2c0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14B2C0u;
    SET_GPR_U32(ctx, 31, 0x14B2C8u);
    ctx->pc = 0x14B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2C0u;
    // 0x14b2c4: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14B2C0u, 0x14B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2C8u;
}
