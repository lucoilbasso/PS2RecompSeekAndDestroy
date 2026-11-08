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

// Function: entry_0016912c
// Address: 0x16912c - 0x169168
void entry_0016912c_0x16912c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016912c_0x16912c");
#endif

    ctx->pc = 0x16912cu;

    // 0x16912c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x169130: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x169130u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x169134: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x169134u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x169138: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x169138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16913c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x16913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x169140: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x169140u;
    {
        const bool branch_taken_0x169140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169140u;
        // 0x169144: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169140) {
            ctx->pc = 0x169220u;
            return;
        }
    }
    ctx->pc = 0x169148u;
    // 0x169148: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x169148u;
    {
        const bool branch_taken_0x169148 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x16914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169148u;
        // 0x16914c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169148) {
            ctx->pc = 0x169168u;
            return;
        }
    }
    ctx->pc = 0x169150u;
    // 0x169150: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x169150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169154: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x169154u;
    {
        const bool branch_taken_0x169154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x169154) {
            ctx->pc = 0x169158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169154u;
            // 0x169158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169180u;
            return;
        }
    }
    ctx->pc = 0x16915Cu;
    // 0x16915c: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x16915Cu;
    {
        const bool branch_taken_0x16915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16915Cu;
        // 0x169160: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16915c) {
            ctx->pc = 0x169444u;
            return;
        }
    }
    ctx->pc = 0x169164u;
    // 0x169164: 0x0  nop
    ctx->pc = 0x169164u;
    // NOP
    ctx->pc = 0x169168u;
}
