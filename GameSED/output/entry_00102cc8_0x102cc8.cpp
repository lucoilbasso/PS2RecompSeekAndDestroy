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

// Function: entry_00102cc8
// Address: 0x102cc8 - 0x102d08
void entry_00102cc8_0x102cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102cc8_0x102cc8");
#endif

    ctx->pc = 0x102cc8u;

    // 0x102cc8: 0x56200023  bnel        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x102CC8u;
    {
        const bool branch_taken_0x102cc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x102cc8) {
            ctx->pc = 0x102CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102CC8u;
            // 0x102ccc: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102D58u;
            return;
        }
    }
    ctx->pc = 0x102CD0u;
    // 0x102cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102cd8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102ce0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102ce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102ce4: 0x24a51b88  addiu       $a1, $a1, 0x1B88
    ctx->pc = 0x102ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7048));
    // 0x102ce8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102cec: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x102cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102cf0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102cf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102cf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102cfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102d00: 0x80415ec  j           func_1057B0
    ctx->pc = 0x102D00u;
    ctx->pc = 0x102D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D00u;
    // 0x102d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    ApSCDEntError__FiPciP5BcObj_0x1057b0(rdram, ctx, runtime); return;
    ctx->pc = 0x102D08u;
}
