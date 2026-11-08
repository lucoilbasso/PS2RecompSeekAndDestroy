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

// Function: _nextStartCode
// Address: 0x1c2128 - 0x1c21a4
void _nextStartCode_0x1c2128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_nextStartCode_0x1c2128");
#endif

    switch (ctx->pc) {
        case 0x1c2140u: goto label_1c2140;
        case 0x1c2168u: goto label_1c2168;
        case 0x1c2170u: goto label_1c2170;
        case 0x1c2178u: goto label_1c2178;
        case 0x1c2184u: goto label_1c2184;
        default: break;
    }

    ctx->pc = 0x1c2128u;

    // 0x1c2128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c212c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c2138: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x1C2138u;
    SET_GPR_U32(ctx, 31, 0x1C2140u);
    ctx->pc = 0x1C213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2138u;
    // 0x1c213c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1C2138u, 0x1C2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2140u;
label_1c2140:
    // 0x1c2140: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c2140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c2144: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1c2144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1c2148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c2148u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x1c214c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1c214cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1c2150: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1c2150u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1c2154: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x1c2154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1c2158: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2158u;
    {
        const bool branch_taken_0x1c2158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2158u;
        // 0x1c215c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2158) {
            ctx->pc = 0x1C2178u;
            goto label_1c2178;
        }
    }
    ctx->pc = 0x1C2160u;
    // 0x1c2160: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C2160u;
    SET_GPR_U32(ctx, 31, 0x1C2168u);
    ctx->pc = 0x1C2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2160u;
    // 0x1c2164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C2160u, 0x1C2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2168u;
label_1c2168:
    // 0x1c2168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2168u;
    {
        const bool branch_taken_0x1c2168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2168u;
        // 0x1c216c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2168) {
            ctx->pc = 0x1C2178u;
            goto label_1c2178;
        }
    }
    ctx->pc = 0x1C2170u;
label_1c2170:
    // 0x1c2170: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C2170u;
    SET_GPR_U32(ctx, 31, 0x1C2178u);
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C2170u, 0x1C2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2178u;
label_1c2178:
    // 0x1c2178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c217c: 0xc070778  jal         func_1C1DE0
    ctx->pc = 0x1C217Cu;
    SET_GPR_U32(ctx, 31, 0x1C2184u);
    ctx->pc = 0x1C2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C217Cu;
    // 0x1c2180: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DE0u, 0x1C217Cu, 0x1C2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2184u;
label_1c2184:
    // 0x1c2184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2188: 0x1451fff9  bne         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C2188u;
    {
        const bool branch_taken_0x1c2188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1C218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2188u;
        // 0x1c218c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2188) {
            ctx->pc = 0x1C2170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2170;
        }
    }
    ctx->pc = 0x1C2190u;
    // 0x1c2190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2194: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c2194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c219c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C219Cu;
        // 0x1c21a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21A4u;
}
