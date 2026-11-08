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

// Function: entry_0010e57c
// Address: 0x10e57c - 0x10e5f4
void entry_0010e57c_0x10e57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e57c_0x10e57c");
#endif

    switch (ctx->pc) {
        case 0x10e584u: goto label_10e584;
        case 0x10e590u: goto label_10e590;
        case 0x10e5a0u: goto label_10e5a0;
        case 0x10e5bcu: goto label_10e5bc;
        default: break;
    }

    ctx->pc = 0x10e57cu;

    // 0x10e57c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10E57Cu;
    SET_GPR_U32(ctx, 31, 0x10E584u);
    ctx->pc = 0x10E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E57Cu;
    // 0x10e580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E57Cu, 0x10E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E584u;
label_10e584:
    // 0x10e584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10e584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e588: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10E588u;
    SET_GPR_U32(ctx, 31, 0x10E590u);
    ctx->pc = 0x10E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E588u;
    // 0x10e58c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E588u, 0x10E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E590u;
label_10e590:
    // 0x10e590: 0xa622017a  sh          $v0, 0x17A($s1)
    ctx->pc = 0x10e590u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 378), (uint16_t)GPR_U32(ctx, 2));
    // 0x10e594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e598: 0xc0654b2  jal         func_1952C8
    ctx->pc = 0x10E598u;
    SET_GPR_U32(ctx, 31, 0x10E5A0u);
    ctx->pc = 0x10E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E598u;
    // 0x10e59c: 0xa6300178  sh          $s0, 0x178($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1952C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1952C8u, 0x10E598u, 0x10E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E5A0u;
label_10e5a0:
    // 0x10e5a0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x10e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x10e5a4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10e5a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e5ac: 0x1045001f  beq         $v0, $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x10E5ACu;
    {
        const bool branch_taken_0x10e5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5ACu;
        // 0x10e5b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5ac) {
            ctx->pc = 0x10E62Cu;
            return;
        }
    }
    ctx->pc = 0x10E5B4u;
    // 0x10e5b4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10E5B4u;
    SET_GPR_U32(ctx, 31, 0x10E5BCu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10E5B4u, 0x10E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E5BCu;
label_10e5bc:
    // 0x10e5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e5c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10e5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e5c4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10E5C4u;
    {
        const bool branch_taken_0x10e5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5C4u;
        // 0x10e5c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5c4) {
            ctx->pc = 0x10E62Cu;
            return;
        }
    }
    ctx->pc = 0x10E5CCu;
    // 0x10e5cc: 0x96220178  lhu         $v0, 0x178($s1)
    ctx->pc = 0x10e5ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x10e5d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x10e5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10e5d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10e5d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E5D8u;
    {
        const bool branch_taken_0x10e5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5D8u;
        // 0x10e5dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5d8) {
            ctx->pc = 0x10E5FCu;
            return;
        }
    }
    ctx->pc = 0x10E5E0u;
    // 0x10e5e0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x10e5e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x10e5e4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x10e5e4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10e5e8: 0xa623017c  sh          $v1, 0x17C($s1)
    ctx->pc = 0x10e5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 380), (uint16_t)GPR_U32(ctx, 3));
    // 0x10e5ec: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10E5ECu;
    {
        const bool branch_taken_0x10e5ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e5ec) {
            ctx->pc = 0x10E5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E5ECu;
            // 0x10e5f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E5F4u;
            return;
        }
    }
    ctx->pc = 0x10E5F4u;
}
