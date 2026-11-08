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

// Function: entry_00102618
// Address: 0x102618 - 0x102658
void entry_00102618_0x102618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102618_0x102618");
#endif

    ctx->pc = 0x102618u;

    // 0x102618: 0x56200023  bnel        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x102618u;
    {
        const bool branch_taken_0x102618 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x102618) {
            ctx->pc = 0x10261Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102618u;
            // 0x10261c: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1026A8u;
            return;
        }
    }
    ctx->pc = 0x102620u;
    // 0x102620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102628: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10262c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10262cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102630: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102634: 0x24a51b58  addiu       $a1, $a1, 0x1B58
    ctx->pc = 0x102634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7000));
    // 0x102638: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10263c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102640: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102648: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102648u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10264c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10264cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102650: 0x80415ec  j           func_1057B0
    ctx->pc = 0x102650u;
    ctx->pc = 0x102654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102650u;
    // 0x102654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    ApSCDEntError__FiPciP5BcObj_0x1057b0(rdram, ctx, runtime); return;
    ctx->pc = 0x102658u;
}
