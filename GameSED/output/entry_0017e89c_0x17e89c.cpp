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

// Function: entry_0017e89c
// Address: 0x17e89c - 0x17e8d0
void entry_0017e89c_0x17e89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e89c_0x17e89c");
#endif

    ctx->pc = 0x17e89cu;

    // 0x17e89c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17e89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17e8a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17e8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17e8a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17e8a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17e8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17e8b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e8b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17e8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17e8b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17e8bc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x17e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e8c0: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17E8C0u;
    {
        const bool branch_taken_0x17e8c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8C0u;
        // 0x17e8c4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8c0) {
            ctx->pc = 0x17E924u;
            return;
        }
    }
    ctx->pc = 0x17E8C8u;
    // 0x17e8c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17e8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8cc: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->pc = 0x17e8d0u;
}
