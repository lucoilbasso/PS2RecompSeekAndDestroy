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

// Function: entry_0014c8d4
// Address: 0x14c8d4 - 0x14c928
void entry_0014c8d4_0x14c8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c8d4_0x14c8d4");
#endif

    ctx->pc = 0x14c8d4u;

    // 0x14c8d4: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x14c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14c8d8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14c8dc: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14C8DCu;
    {
        const bool branch_taken_0x14c8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14c8dc) {
            ctx->pc = 0x14C8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8DCu;
            // 0x14c8e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C95Cu;
            return;
        }
    }
    ctx->pc = 0x14C8E4u;
    // 0x14c8e4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x14c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x14c8e8: 0x5642001c  bnel        $s2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14C8E8u;
    {
        const bool branch_taken_0x14c8e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c8e8) {
            ctx->pc = 0x14C8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8E8u;
            // 0x14c8ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C95Cu;
            return;
        }
    }
    ctx->pc = 0x14C8F0u;
    // 0x14c8f0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14c8f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c8f4: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x14c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x14c8f8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14C8F8u;
    {
        const bool branch_taken_0x14c8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c8f8) {
            ctx->pc = 0x14C8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8F8u;
            // 0x14c8fc: 0x8e050178  lw          $a1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C938u;
            return;
        }
    }
    ctx->pc = 0x14C900u;
    // 0x14c900: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x14c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x14c904: 0x24046003  addiu       $a0, $zero, 0x6003
    ctx->pc = 0x14c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24579));
    // 0x14c908: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x14c908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2400B4u));
    // 0x14c90c: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C90Cu;
    {
        const bool branch_taken_0x14c90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x14c90c) {
            ctx->pc = 0x14C910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C90Cu;
            // 0x14c910: 0x8e050178  lw          $a1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C938u;
            return;
        }
    }
    ctx->pc = 0x14C914u;
    // 0x14c914: 0x8e020854  lw          $v0, 0x854($s0)
    ctx->pc = 0x14c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2132)));
    // 0x14c918: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C918u;
    {
        const bool branch_taken_0x14c918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C918u;
        // 0x14c91c: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c918) {
            ctx->pc = 0x14C928u;
            return;
        }
    }
    ctx->pc = 0x14C920u;
    // 0x14c920: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C920u;
    {
        const bool branch_taken_0x14c920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14c920) {
            ctx->pc = 0x14C924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C920u;
            // 0x14c924: 0x8e050178  lw          $a1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C938u;
            return;
        }
    }
    ctx->pc = 0x14C928u;
}
