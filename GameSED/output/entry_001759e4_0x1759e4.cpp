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

// Function: entry_001759e4
// Address: 0x1759e4 - 0x175a20
void entry_001759e4_0x1759e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001759e4_0x1759e4");
#endif

    switch (ctx->pc) {
        case 0x175a1cu: goto label_175a1c;
        default: break;
    }

    ctx->pc = 0x1759e4u;

    // 0x1759e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1759e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1759e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1759e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1759ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1759ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1759f0: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1759f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1759f4: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x1759f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46128);
    // 0x1759f8: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1759f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1759fc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1759fcu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 18));
    // 0x175a00: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x175a00u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 20));
    // 0x175a04: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x175a04u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 21));
    // 0x175a08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x175a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x175a0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x175A0Cu;
    {
        const bool branch_taken_0x175a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175a0c) {
            ctx->pc = 0x175A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175A0Cu;
            // 0x175a10: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175A20u;
            return;
        }
    }
    ctx->pc = 0x175A14u;
    // 0x175a14: 0xc05d426  jal         func_175098
    ctx->pc = 0x175A14u;
    SET_GPR_U32(ctx, 31, 0x175A1Cu);
    ctx->pc = 0x175A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A14u;
    // 0x175a18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x175A14u, 0x175A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175A1Cu;
label_175a1c:
    // 0x175a1c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x175a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->pc = 0x175a20u;
}
