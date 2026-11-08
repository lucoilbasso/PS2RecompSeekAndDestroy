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

// Function: entry_0011f498
// Address: 0x11f498 - 0x11f4f8
void entry_0011f498_0x11f498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f498_0x11f498");
#endif

    switch (ctx->pc) {
        case 0x11f4a0u: goto label_11f4a0;
        case 0x11f4b4u: goto label_11f4b4;
        case 0x11f4ccu: goto label_11f4cc;
        default: break;
    }

    ctx->pc = 0x11f498u;

label_11f498:
    // 0x11f498: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x11F498u;
    SET_GPR_U32(ctx, 31, 0x11F4A0u);
    ctx->pc = 0x11F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F498u;
    // 0x11f49c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x11F498u, 0x11F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4A0u;
label_11f4a0:
    // 0x11f4a0: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x11f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11f4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4ac: 0xc06ef68  jal         func_1BBDA0
    ctx->pc = 0x11F4ACu;
    SET_GPR_U32(ctx, 31, 0x11F4B4u);
    ctx->pc = 0x11F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4ACu;
    // 0x11f4b0: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBDA0u, 0x11F4ACu, 0x11F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4B4u;
label_11f4b4:
    // 0x11f4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4b8: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x11f4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11f4bc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x11f4bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x11f4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4c4: 0xc06efbc  jal         func_1BBEF0
    ctx->pc = 0x11F4C4u;
    SET_GPR_U32(ctx, 31, 0x11F4CCu);
    ctx->pc = 0x11F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4C4u;
    // 0x11f4c8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEF0u, 0x11F4C4u, 0x11F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4CCu;
label_11f4cc:
    // 0x11f4cc: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x11f4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x11f4d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11F4D0u;
    {
        const bool branch_taken_0x11f4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4D0u;
        // 0x11f4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4d0) {
            ctx->pc = 0x11F498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f498;
        }
    }
    ctx->pc = 0x11F4D8u;
    // 0x11f4d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11f4d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f4dc: 0x12600080  beqz        $s3, . + 4 + (0x80 << 2)
    ctx->pc = 0x11F4DCu;
    {
        const bool branch_taken_0x11f4dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4DCu;
        // 0x11f4e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4dc) {
            ctx->pc = 0x11F6E0u;
            return;
        }
    }
    ctx->pc = 0x11F4E4u;
    // 0x11f4e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11f4e8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x11f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x11f4ec: 0x24570790  addiu       $s7, $v0, 0x790
    ctx->pc = 0x11f4ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x11f4f0: 0x247249e0  addiu       $s2, $v1, 0x49E0
    ctx->pc = 0x11f4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 18912));
    // 0x11f4f4: 0x0  nop
    ctx->pc = 0x11f4f4u;
    // NOP
    ctx->pc = 0x11f4f8u;
}
