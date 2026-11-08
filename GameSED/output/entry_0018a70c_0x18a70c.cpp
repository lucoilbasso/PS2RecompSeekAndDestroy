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

// Function: entry_0018a70c
// Address: 0x18a70c - 0x18a74c
void entry_0018a70c_0x18a70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a70c_0x18a70c");
#endif

    ctx->pc = 0x18a70cu;

    // 0x18a70c: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x18a70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x18a710: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18A710u;
    {
        const bool branch_taken_0x18a710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A710u;
        // 0x18a714: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a710) {
            ctx->pc = 0x18A74Cu;
            return;
        }
    }
    ctx->pc = 0x18A718u;
    // 0x18a718: 0x9603015c  lhu         $v1, 0x15C($s0)
    ctx->pc = 0x18a718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x18a71c: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x18a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x18a720: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18a720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18a724: 0xdc860038  ld          $a2, 0x38($a0)
    ctx->pc = 0x18a724u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x18a728: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x18a728u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a72c: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x18a72cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18a730: 0x94830030  lhu         $v1, 0x30($a0)
    ctx->pc = 0x18a730u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18a734: 0x94e5000c  lhu         $a1, 0xC($a3)
    ctx->pc = 0x18a734u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x18a738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a73c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x18a73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x18a740: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18a740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18a744: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x18a744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x18a748: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x18a748u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
    ctx->pc = 0x18a74cu;
}
