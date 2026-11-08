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

// Function: entry_00101230
// Address: 0x101230 - 0x101280
void entry_00101230_0x101230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101230_0x101230");
#endif

    ctx->pc = 0x101230u;

    // 0x101230: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x101234: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x101234u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101238: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x101238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10123c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x101240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x101244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x101244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x101248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x101248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10124c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x101250: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x101254: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x101254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x101258: 0x8c700044  lw          $s0, 0x44($v1)
    ctx->pc = 0x101258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x10125c: 0x14a20050  bne         $a1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x10125Cu;
    {
        const bool branch_taken_0x10125c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x101260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10125Cu;
        // 0x101260: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10125c) {
            ctx->pc = 0x1013A0u;
            return;
        }
    }
    ctx->pc = 0x101264u;
    // 0x101264: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x101264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x101268: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x101268u;
    {
        const bool branch_taken_0x101268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101268) {
            ctx->pc = 0x10126Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101268u;
            // 0x10126c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1012F8u;
            return;
        }
    }
    ctx->pc = 0x101270u;
    // 0x101270: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x101270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101274: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x101274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x101278: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x101278u;
    {
        const bool branch_taken_0x101278 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101278u;
        // 0x10127c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101278) {
            ctx->pc = 0x1012E8u;
            return;
        }
    }
    ctx->pc = 0x101280u;
}
