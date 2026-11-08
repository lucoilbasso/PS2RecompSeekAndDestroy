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

// Function: entry_001973f8
// Address: 0x1973f8 - 0x1974b0
void entry_001973f8_0x1973f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001973f8_0x1973f8");
#endif

    switch (ctx->pc) {
        case 0x1974a4u: goto label_1974a4;
        default: break;
    }

    ctx->pc = 0x1973f8u;

    // 0x1973f8: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x1973f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x1973fc: 0x3484130d  ori         $a0, $a0, 0x130D
    ctx->pc = 0x1973fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4877);
    // 0x197400: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x197400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x197404: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x197404u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x197408: 0x27858c90  addiu       $a1, $gp, -0x7370
    ctx->pc = 0x197408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x19740c: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x19740cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x197410: 0x27838c80  addiu       $v1, $gp, -0x7380
    ctx->pc = 0x197410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x197414: 0x252a0010  addiu       $t2, $t1, 0x10
    ctx->pc = 0x197414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x197418: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x197418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x19741c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x19741cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197420: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x197420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197424: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x197424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x197428: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x197428u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19742c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x19742cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x197430: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x197430u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197434: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x197434u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x197438: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x197438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x19743c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x19743cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197440: 0x14b3023  subu        $a2, $t2, $t3
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x197444: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x197444u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x197448: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x197448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x19744c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x19744cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x197450: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x197450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x197454: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x197458: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x197458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19745c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x19745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x197460: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x197460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197464: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x197464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x197468: 0xfd270008  sd          $a3, 0x8($t1)
    ctx->pc = 0x197468u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x19746c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x19746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x197470: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x197470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x197474: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x197474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x197478: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x197478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19747c: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x19747cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x197480: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x197480u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x197484: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x197484u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x197488: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x197488u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x19748c: 0x8ec201bc  lw          $v0, 0x1BC($s6)
    ctx->pc = 0x19748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 444)));
    // 0x197490: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x197490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x197494: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x197494u;
    {
        const bool branch_taken_0x197494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197494u;
        // 0x197498: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197494) {
            ctx->pc = 0x1974B0u;
            return;
        }
    }
    ctx->pc = 0x19749Cu;
    // 0x19749c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19749Cu;
    SET_GPR_U32(ctx, 31, 0x1974A4u);
    ctx->pc = 0x1974A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19749Cu;
    // 0x1974a0: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19749Cu, 0x1974A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974A4u;
label_1974a4:
    // 0x1974a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1974a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974a8: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1974A8u;
    SET_GPR_U32(ctx, 31, 0x1974B0u);
    ctx->pc = 0x1974ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974A8u;
    // 0x1974ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1974A8u, 0x1974B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974B0u;
}
