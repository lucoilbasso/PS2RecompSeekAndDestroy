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

// Function: entry_00184bac
// Address: 0x184bac - 0x184be0
void entry_00184bac_0x184bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184bac_0x184bac");
#endif

    ctx->pc = 0x184bacu;

    // 0x184bac: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x184bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x184bb0: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x184BB0u;
    {
        const bool branch_taken_0x184bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BB0u;
        // 0x184bb4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bb0) {
            ctx->pc = 0x184CF0u;
            return;
        }
    }
    ctx->pc = 0x184BB8u;
    // 0x184bb8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x184bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x184bbc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x184bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x184bc0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x184BC0u;
    {
        const bool branch_taken_0x184bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BC0u;
        // 0x184bc4: 0xae340014  sw          $s4, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bc0) {
            ctx->pc = 0x184C18u;
            return;
        }
    }
    ctx->pc = 0x184BC8u;
    // 0x184bc8: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x184bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x184bcc: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x184bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x184bd0: 0xae340124  sw          $s4, 0x124($s1)
    ctx->pc = 0x184bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 20));
    // 0x184bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bd8: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x184BD8u;
    {
        const bool branch_taken_0x184bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BD8u;
        // 0x184bdc: 0xae310128  sw          $s1, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bd8) {
            ctx->pc = 0x184CD0u;
            return;
        }
    }
    ctx->pc = 0x184BE0u;
}
