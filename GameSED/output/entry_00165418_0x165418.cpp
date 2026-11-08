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

// Function: entry_00165418
// Address: 0x165418 - 0x165470
void entry_00165418_0x165418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165418_0x165418");
#endif

    ctx->pc = 0x165418u;

    // 0x165418: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x165418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16541c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16541cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165420: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x165420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x165424: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x165424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x165428: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x165428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16542c: 0x8e021268  lw          $v0, 0x1268($s0)
    ctx->pc = 0x16542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4712)));
    // 0x165430: 0x54430081  bnel        $v0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x165430u;
    {
        const bool branch_taken_0x165430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x165430) {
            ctx->pc = 0x165434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165430u;
            // 0x165434: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            return;
        }
    }
    ctx->pc = 0x165438u;
    // 0x165438: 0x8e031264  lw          $v1, 0x1264($s0)
    ctx->pc = 0x165438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4708)));
    // 0x16543c: 0x5060007e  beql        $v1, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x16543Cu;
    {
        const bool branch_taken_0x16543c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16543c) {
            ctx->pc = 0x165440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16543Cu;
            // 0x165440: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            return;
        }
    }
    ctx->pc = 0x165444u;
    // 0x165444: 0x8e021234  lw          $v0, 0x1234($s0)
    ctx->pc = 0x165444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
    // 0x165448: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x165448u;
    {
        const bool branch_taken_0x165448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165448u;
        // 0x16544c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165448) {
            ctx->pc = 0x16551Cu;
            return;
        }
    }
    ctx->pc = 0x165450u;
    // 0x165450: 0x8e440690  lw          $a0, 0x690($s2)
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x165454: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x165454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x165458: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x165458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x16545c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x165460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165460u;
    {
        const bool branch_taken_0x165460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165460) {
            ctx->pc = 0x165470u;
            return;
        }
    }
    ctx->pc = 0x165468u;
    // 0x165468: 0xc061920  jal         func_186480
    ctx->pc = 0x165468u;
    SET_GPR_U32(ctx, 31, 0x165470u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x165468u, 0x165470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165470u;
}
