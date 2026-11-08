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

// Function: entry_001521f8
// Address: 0x1521f8 - 0x152230
void entry_001521f8_0x1521f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001521f8_0x1521f8");
#endif

    ctx->pc = 0x1521f8u;

    // 0x1521f8: 0x18a0006c  blez        $a1, . + 4 + (0x6C << 2)
    ctx->pc = 0x1521F8u;
    {
        const bool branch_taken_0x1521f8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1521FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521F8u;
        // 0x1521fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521f8) {
            ctx->pc = 0x1523ACu;
            return;
        }
    }
    ctx->pc = 0x152200u;
    // 0x152200: 0x8ca300d8  lw          $v1, 0xD8($a1)
    ctx->pc = 0x152200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x152204: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x152204u;
    {
        const bool branch_taken_0x152204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152204u;
        // 0x152208: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152204) {
            ctx->pc = 0x152230u;
            return;
        }
    }
    ctx->pc = 0x15220Cu;
    // 0x15220c: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x15220Cu;
    {
        const bool branch_taken_0x15220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15220Cu;
        // 0x152210: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15220c) {
            ctx->pc = 0x1523ACu;
            return;
        }
    }
    ctx->pc = 0x152214u;
    // 0x152214: 0x5062003a  beql        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x152214u;
    {
        const bool branch_taken_0x152214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152214) {
            ctx->pc = 0x152218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152214u;
            // 0x152218: 0xc4e000e0  lwc1        $f0, 0xE0($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x152300u;
            return;
        }
    }
    ctx->pc = 0x15221Cu;
    // 0x15221c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x152220: 0x5062004b  beql        $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x152220u;
    {
        const bool branch_taken_0x152220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152220) {
            ctx->pc = 0x152224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152220u;
            // 0x152224: 0xc4e000e0  lwc1        $f0, 0xE0($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x152350u;
            return;
        }
    }
    ctx->pc = 0x152228u;
    // 0x152228: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x152228u;
    {
        const bool branch_taken_0x152228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152228) {
            ctx->pc = 0x1523ACu;
            return;
        }
    }
    ctx->pc = 0x152230u;
}
