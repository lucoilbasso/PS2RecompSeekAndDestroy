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

// Function: entry_0016947c
// Address: 0x16947c - 0x1694b8
void entry_0016947c_0x16947c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016947c_0x16947c");
#endif

    ctx->pc = 0x16947cu;

    // 0x16947c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169480: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169484: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x169484u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x169488: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x169488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x16948c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x169490: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x169490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x169494: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x169494u;
    {
        const bool branch_taken_0x169494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169494u;
        // 0x169498: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169494) {
            ctx->pc = 0x169578u;
            return;
        }
    }
    ctx->pc = 0x16949Cu;
    // 0x16949c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16949Cu;
    {
        const bool branch_taken_0x16949c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1694A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16949Cu;
        // 0x1694a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16949c) {
            ctx->pc = 0x1694B8u;
            return;
        }
    }
    ctx->pc = 0x1694A4u;
    // 0x1694a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1694a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1694a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1694A8u;
    {
        const bool branch_taken_0x1694a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1694ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694A8u;
        // 0x1694ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694a8) {
            ctx->pc = 0x1694D0u;
            return;
        }
    }
    ctx->pc = 0x1694B0u;
    // 0x1694b0: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1694B0u;
    {
        const bool branch_taken_0x1694b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694B0u;
        // 0x1694b4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694b0) {
            ctx->pc = 0x1697B8u;
            return;
        }
    }
    ctx->pc = 0x1694B8u;
}
