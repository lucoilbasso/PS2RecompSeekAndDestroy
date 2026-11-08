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

// Function: entry_0019a470
// Address: 0x19a470 - 0x19a4c0
void entry_0019a470_0x19a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a470_0x19a470");
#endif

    ctx->pc = 0x19a470u;

    // 0x19a470: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19a470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19a474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a478: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19a478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19a47c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19a480: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19a480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19a484: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x19A484u;
    {
        const bool branch_taken_0x19a484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A484u;
        // 0x19a488: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a484) {
            ctx->pc = 0x19A544u;
            return;
        }
    }
    ctx->pc = 0x19A48Cu;
    // 0x19a48c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x19a48cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a490: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x19a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x19a494: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x19A494u;
    {
        const bool branch_taken_0x19a494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19a494) {
            ctx->pc = 0x19A498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A494u;
            // 0x19a498: 0xc60100d0  lwc1        $f1, 0xD0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A548u;
            return;
        }
    }
    ctx->pc = 0x19A49Cu;
    // 0x19a49c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x19a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19a4a0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x19a4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a4a4: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x19a4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x19a4a8: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x19a4a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x19a4ac: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x19a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x19a4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A4B0u;
    {
        const bool branch_taken_0x19a4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A4B0u;
        // 0x19a4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4b0) {
            ctx->pc = 0x19A4C0u;
            return;
        }
    }
    ctx->pc = 0x19A4B8u;
    // 0x19a4b8: 0xc061920  jal         func_186480
    ctx->pc = 0x19A4B8u;
    SET_GPR_U32(ctx, 31, 0x19A4C0u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x19A4B8u, 0x19A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A4C0u;
}
