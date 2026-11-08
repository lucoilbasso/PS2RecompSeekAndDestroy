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

// Function: entry_00197254
// Address: 0x197254 - 0x197298
void entry_00197254_0x197254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197254_0x197254");
#endif

    ctx->pc = 0x197254u;

    // 0x197254: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x197254u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197258: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x197258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19725c: 0x26d30020  addiu       $s3, $s6, 0x20
    ctx->pc = 0x19725cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x197260: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x197260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x197264: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x197264u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x197268: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x197268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19726c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19726cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197270: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x197270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197274: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x197274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x197278: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x197278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x19727c: 0xae4203c8  sw          $v0, 0x3C8($s2)
    ctx->pc = 0x19727cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 968), GPR_U32(ctx, 2));
    // 0x197280: 0x265003d0  addiu       $s0, $s2, 0x3D0
    ctx->pc = 0x197280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
    // 0x197284: 0xaee40008  sw          $a0, 0x8($s7)
    ctx->pc = 0x197284u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 4));
    // 0x197288: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197288u;
    {
        const bool branch_taken_0x197288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197288u;
        // 0x19728c: 0x8fd10164  lw          $s1, 0x164($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197288) {
            ctx->pc = 0x197298u;
            return;
        }
    }
    ctx->pc = 0x197290u;
    // 0x197290: 0xc061920  jal         func_186480
    ctx->pc = 0x197290u;
    SET_GPR_U32(ctx, 31, 0x197298u);
    ctx->pc = 0x197294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197290u;
    // 0x197294: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x197290u, 0x197298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197298u;
}
